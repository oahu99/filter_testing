#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Vgenericfir.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "i2s_slave.hpp"
#include "tbclock.h"

using namespace std;


void tick (Vgenericfir* tb, VerilatedVcdC* tfp, unsigned long int &counter, TBCLOCK* system_clk, TBCLOCK* sample_clk) {
	
	unsigned mintime;

	mintime = (system_clk->time_to_edge() < sample_clk->time_to_edge()) ? system_clk->time_to_edge() : sample_clk->time_to_edge();

	tb->eval();

	sample_clk->advance(mintime);
	tb->i_clk = system_clk->advance(mintime);

	counter += mintime;

	tb->eval();

	tfp->dump(counter);
	tfp->flush();

}

int main() {
	I2S_SLAVE* i2s_slave = new I2S_SLAVE;
	TBCLOCK* system_clk = new TBCLOCK(20000); // 50 MHz
	TBCLOCK* sample_clk = new TBCLOCK(1000000);// TBCLOCK(20833333); // 48.0 KHz sample clock

	Vgenericfir* tb = new Vgenericfir;
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	tb->trace(tfp, 99);
	tfp->open("out.vcd");
	long unsigned int counter;
	bool i_ce = 0;

	ifstream mic_left ("test.dat");
	ifstream mic_right ("MIC_1_RIGHT.dat");

	string line;

	vector<int> left_vector;
	vector<int> right_vector;

	// Read left data into a integer vector
	if (mic_left.is_open())
	{
		while (getline(mic_left,line))
		{
			left_vector.emplace_back(stoi(line));
		}
		mic_left.close();
	}

	// Read right data into an integer vector
	// if (mic_right.is_open())
	// {
	// 	while (getline(mic_right,line))
	// 	{
	// 		right_vector.emplace_back(line);
	// 	}
	// 	mic_right.close();
	// }
	
	int i = 0;

	while (i < left_vector.size()) {
		tick(tb, tfp, counter, system_clk, sample_clk);

		if (sample_clk->falling_edge()) {
				
			tb->i_sample = left_vector[i];

			tb->i_ce = 1;

			cout << tb->o_result << "\n";

			i++;
		}

		else
			tb->i_ce = 0;

		//cout << tb->o_result;

		counter ++;





	}
}


