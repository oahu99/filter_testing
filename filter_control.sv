module filter_control
(
	input logic i_clk, i_reset,
	input logic i_ce,
	input logic i_start, // active low
	input logic [15:0] i_sample,
	output logic [15:0] o_result
);

logic i_tap_wr; // active high
logic [15:0] i_tap; // new tap input
logic [63:0] counter;

logic [31:0] impulse;
logic i_ce_local;
logic [31:0] out;

logic [31:0] o_float; // original sample converted to floating point representation

fixed_to_float fixed_0 (.i_fixed(i_sample), .o_float);

slowfil fir_0 (.i_clk, .i_reset(~i_reset), .i_tap_wr, .i_ce, .i_sample(o_float), .o_result(out), .i_tap);

float_to_fixed convert_0 (.i_float(out), .o_fixed(o_result));

endmodule


