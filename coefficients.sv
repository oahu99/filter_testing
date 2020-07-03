module coefficients
(
	input logic [6:0] i_idx,
	input logic i_clk,
	output logic [15:0] o_tap,
);
parameter ADDR_WIDTH=16;
parameter DATA_WIDTH=16;
parameter TEST=1; // bit to preload coefficients for early sim testing

logic [15:0] [15:0] taps; // array for 16 taps, just for testing

initial begin // initialize taps array for sim
if (TEST) begin
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
end

always_ff @ (posedge i_clk) begin // access taps for reading into filter
	o_tap = taps[15:0][i_idx];
end

endmodule