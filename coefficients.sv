module coefficients
(
	input logic [4:0] i_idx,
	output logic [15:0] o_tap
);

logic [15:0] [15:0] taps; // array for 16 taps, just for testing

initial begin // initialize taps array for sim
	// taps = '{'{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	// 		 '{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
	// 		 '{1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1},
	// 		 '{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1},
	// 		 '{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
	// 		 '{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
	// 		 '{1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1},
	// 		 '{1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1},
	// 		 '{1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
	// 		 '{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
	// 		 '{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1},
	// 		 '{1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1},
	// 		 '{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
	// 		 '{1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
	// 		 '{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
	// 		 '{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

	taps = {{16'h0565},
			{16'h0BD9},
			{16'h0B0B},
			{16'hFF27},
			{16'hF3A7},
			{16'hFB52},
			{16'h182E},
			{16'h3384},
			{16'h3384},
			{16'h182E},
			{16'hFB52},
			{16'hF3A7},
			{16'hFF27},
			{16'h0B0B},
			{16'h0BD9},
			{16'h0565}};
end

always_comb begin
	o_tap = taps[15:0][i_idx];
end

endmodule