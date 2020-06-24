#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	ifstream mic_left ("obj_dir/impulse.dat");

	string line;

	vector<int> left_vector;

	int cnt = 1;

	// Read left data into a integer vector
	if (mic_left.is_open())
	{
		while (getline(mic_left,line))
		{	
			left_vector.push_back(stoi(line));
		}
		cout << "done";
		mic_left.close();
	}
}	