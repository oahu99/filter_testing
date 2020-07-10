#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Vfilter_control.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "tbclock.h"

using namespace std;


void tick (Vfilter_control* tb, VerilatedVcdC* tfp, unsigned long int &counter, TBCLOCK* system_clk, TBCLOCK* sample_clk) {
	
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

	TBCLOCK* system_clk = new TBCLOCK(20000); // 50 MHz
	//TBCLOCK* sample_clk = new TBCLOCK(1000000);// TBCLOCK(20833333); // 48.0 KHz sample clock
	TBCLOCK* sample_clk = new TBCLOCK(20833333); // 48.0 KHz sample clock


	Vfilter_control* tb = new Vfilter_control;
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	tb->trace(tfp, 99);
	tfp->open("out.vcd");


	long unsigned int counter;
	bool i_ce = 0;

	//ifstream mic_left ("MIC_1_RIGHT.dat");
	ifstream mic_left ("impulse.dat");


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
	int ce_flag = 0;

	while (i < left_vector.size()) { 			// loop over entire input vector for simulation

		tick(tb, tfp, counter, system_clk, sample_clk); // advance clocks

		tb->i_start = (20 < i && i < 30) ? 0 : 1; // start signal
		tb->i_reset = (i < 10) ? 0 : 1; // reset signal

		if (sample_clk->falling_edge()) { // send new data to filter
				
			tb->i_sample = left_vector[i];

			tb->i_ce = 1;
			ce_flag = 1;

			cout<< tb->o_result << "\n";
			//printf("%f\n", tb->o_result);
			i++;
		}

		else if (system_clk->falling_edge() && tb->i_ce) {
			if (ce_flag) 
				ce_flag = 0;
			else
				tb->i_ce = 0;
		}

		else if (system_clk->rising_edge()) {
			tb->i_ce = 0;
			ce_flag = 0;
		}

		//cout << tb->o_result;

		counter ++;





	}
}


