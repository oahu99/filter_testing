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


void tick (Vfilter_control* tb, VerilatedVcdC* tfp, unsigned long int &counter, TBCLOCK* system_clk, TBCLOCK* i2s_clk) {
	
	unsigned mintime;

	mintime = (system_clk->time_to_edge() < i2s_clk->time_to_edge()) ? system_clk->time_to_edge() : i2s_clk->time_to_edge();

	tb->eval();

	tb->i2s_sck = i2s_clk->advance(mintime);
	tb->i_clk = system_clk->advance(mintime);

	counter += mintime;

	tb->eval();

	tfp->dump(counter);
	tfp->flush();

}

int main() {

	TBCLOCK* system_clk = new TBCLOCK(20000); // 50 MHz
	TBCLOCK* i2s_clk = new TBCLOCK(20833333); // i2s bit clock
	I2S_SLAVE* i2s_slave = new I2S_SLAVE; // i2s microphone simulator

	Vfilter_control* tb = new Vfilter_control;
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	tb->trace(tfp, 99);
	tfp->open("out.vcd");

	long unsigned int counter;
	
	int i = 0;
	int j = 0;

	i2s_slave->i2s_init(); // initialize data vectors for i2s sim

	while (!i2s_slave->i2s_done()) { 			// loop over entire input vector for simulation

		tick(tb, tfp, counter, system_clk, i2s_clk); // advance clocks


		tb->i_start = (10 < j && j < 20) ? 0 : 1; // start signal
		tb->i_reset = (j < 5) ? 0 : 1; // reset signal

		if (i2s_clk->falling_edge()) { // send new data to filter
				
			// Drive I2S simulation on the bit clock
			i2s_slave->i2s_stream();
			tb->i2s_sda = i2s_slave->sda;
	        tb->i2s_ws = (i2s_slave->next_state == I2S_SLAVE::tx_r) ? 1 : 0;

		}

		if (system_clk->rising_edge()) {
			j++;
			if (tb->i_ce) {
	        	cout << tb->o_result << "\n";
	        	i++;
	        }
		}

	}
}


