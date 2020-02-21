#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Vfilter_control.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "tbclock.h"
#include "i2s_slave.hpp"

using namespace std;


void tick (Vfilter_control* tb, VerilatedVcdC* tfp, unsigned long int &counter, TBCLOCK* system_clk, TBCLOCK* sample_clk) {
	
	unsigned mintime;

	mintime = (system_clk->time_to_edge() < sample_clk->time_to_edge()) ? system_clk->time_to_edge() : sample_clk->time_to_edge();

	tb->eval();

	tb->i2s_sck = sample_clk->advance(mintime);
	tb->i_clk = system_clk->advance(mintime);

	counter += mintime;

	tb->eval();

	tfp->dump(counter);
	tfp->flush();

}

int main() {

	TBCLOCK* system_clk = new TBCLOCK(20000); // 50 MHz
	TBCLOCK* sample_clk = new TBCLOCK(20833333); // i2s bit clock
	I2S_SLAVE* i2s_slave = new I2S_SLAVE; // i2s microphone simulator

	Vfilter_control* tb = new Vfilter_control;
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	tb->trace(tfp, 99);
	tfp->open("out.vcd");


	long unsigned int counter;
	bool i_ce = 0;

	ifstream mic_left ("test.dat");

	string line;

	vector<int> left_vector;

	// Read left data into a integer vector
	if (mic_left.is_open())
	{
		while (getline(mic_left,line))
		{
			left_vector.emplace_back(stoi(line));
		}
		mic_left.close();
	}
	
	int i = 0;

	i2s_slave->i2s_init(); // initialize data vectors for i2s sim

	while (i < left_vector.size()) { 			// loop over entire input vector for simulation

		tick(tb, tfp, counter, system_clk, sample_clk); // advance clocks

		tb->i_start = (20 < i && i < 30) ? 0 : 1; // start signal
		tb->i_reset = (i < 10) ? 0 : 1; // reset signal

		if (sample_clk->falling_edge()) { // send new data to filter
				
			// tb->i_sample = left_vector[i];
			// tb->i_ce = 1;
			// cout << tb->o_result << "\n";

			i2s_slave->i2s_stream();
			tb->i2s_sda = i2s_slave->sda;
	        tb->i2s_ws = (i2s_slave->next_state == I2S_SLAVE::tx_r) ? 1 : 0;


			i++;

		}

		else
			tb->i_ce = 0;

		//cout << tb->o_result;

		counter ++;





	}
}


