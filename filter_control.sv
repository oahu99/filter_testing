module filter_control
(
	input logic i_clk, i_reset,
	input logic i_ce,
	input logic i_start, // active low
	input logic [15:0] i_sample,
	output logic [38:0] o_result,
	input logic i2s_sck, // i2s bit clock
	input logic i2s_ws, // i2s word select
	input logic i2s_sda // i2s bitstream input
);


logic [4:0] state, next_state; // state machine

logic [4:0] i_idx; // index for tap coefficient in memory
logic i_tap_wr; // active high
logic [15:0] i_tap; // new tap input

logic [15:0] left_channel, right_channel; // outputs from i2s master

always_ff @ (posedge i_clk) begin
	if (~i_reset) 
		state <= 0;
	else
		state <= next_state;
end

always_comb begin

	/* verilator lint_off WIDTH */
	i_idx = (state) ? (state - 1) : 0; // i_idx should be state-1 for state > 0
	/* verilator lint_on WIDTH */

	case (state) 
		0 		:	begin
						next_state = (i_start) ? 0 : 1; // start fsm with active_low start
						i_tap_wr = 0;
					end

		16 		:	begin
						next_state = (~i_start) ? 16 : 0; // wait for start to be released
						i_tap_wr = 0;
					end

		default	:	begin
						next_state = state + 1;
						i_tap_wr = 1;
					end
	endcase
end

coefficients coeff_0 (	.i_idx, 
						.i_clk, 
						.o_tap(i_tap)
						); // memory with coefficients to load

genericfir filter_0 (	.i_clk, 
						.i_reset(~i_reset), 
						.i_tap_wr, 
						.i_tap, 
						.i_ce, 
						.i_sample, 
						.o_result
						); // top level for FIR filter

i2s_master i2s_m0 (		.sck(i2s_sck), 
						.ws(i2s_ws), 
						.sd(i2s_sda), 
						.data_left(left_channel), 
						.data_right(right_channel)
						); // i2s receiver from mic


endmodule


