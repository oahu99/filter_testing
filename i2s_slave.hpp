#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class I2S_SLAVE {

	public:

	/////////PORTS////////////////////
	bool sda, scl, clk_edge;

	///////LOCAL VARIABLES////////////
	// states for i2s tx state machine
	enum state { idle, tx_l, tx_r} curr_state, next_state;
	// counters for transmitting bits/words
	int bit, word;
	// vectors for left and right words
	vector<int>* left_vector = new vector<int>;
	vector<int>* right_vector = new vector<int>;

	void i2s_init ();

	void i2s_stream(
		// state &next_state, 
		// 			state &curr_state, 
		// 			bool clk_edge 
		// 			bool &scl, 
		// 			bool &sda, 
		// 			int &bit, 
		// 			int &word, 
		// 			vector<int>* left_vector, 
		// 			vector<int>* right_vector
					);
};

// initialize vectors with right/left channel
void I2S_SLAVE::i2s_init () {

	next_state = curr_state = tx_l;
	bit = 0;
	word = 0;

	ifstream mic_left ("MIC_1_LEFT.dat");
	ifstream mic_right ("MIC_1_RIGHT.dat");

	string line;

	// Read left data into a integer vector
	if (mic_left.is_open())
	{
		while (getline (mic_left,line))
		{
			left_vector->emplace_back(stoi(line));
		}
		mic_left.close();
	}

	// Read right data into an integer vector
	if (mic_right.is_open())
	{
		while (getline (mic_right,line))
		{
			right_vector->emplace_back(stoi(line));
		}
		mic_right.close();
	}
}

// function to send i2s data
void I2S_SLAVE::i2s_stream(	
	// state &next_state, 
	// 						state &curr_state, 
	// 						bool clk_edge 
	// 						bool &scl, 
	// 						bool &sda, 
	// 						int &bit, 
	// 						int &word,
	// 						vector<int>* left_vector, 
	// 						vector<int>* right_vector
							)
{	
	curr_state = next_state;
	// block for next state logic and signals
	//cout << bit << "\n";
	switch (curr_state)
	{
		case idle 	: 	
					//cout << "idle \n";
					next_state = (word == 0) ? tx_l : idle; 
					break;
		case tx_l 	: 	
					//cout << "tx_l \n";
					next_state = (bit == 15) ? tx_r : tx_l; 
					sda = (((left_vector->at(word)<<bit)&(0x8000))>>15); // assert bit on sda
					bit++;
					break;
		case tx_r 	: 	
					//cout << "tx_r \n";
					next_state = (bit == 31) ? tx_l : tx_r; 
					sda = (((right_vector->at(word)<<(bit-16))&(0x8000))>>15);
					word = (bit == 31) ? word+1 : word;
					bit = (bit == 31) ? 0 : bit+1;
					break;
	}
}
