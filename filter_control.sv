module filter_control
(
	input logic i_clk, i_reset,
	input logic i_ce,
	input logic i_start, // active low
	input logic [15:0] i_sample,
	output logic [38:0] o_result
)

logic [4:0] state, next_state; // state machine
logic i_tap_wr; // active high
logic [15:0] i_tap; // new tap input

always_ff @ (posedge clk) begin
	if (i_reset) 
		next_state <= 0;
	else
		state <= next_state
end

always_comb begin
	i_tap_wr = 0;
	case (state) begin
		0 		:	next_state = (i_start) ? 0 : 1; // start fsm with active_low start

		17 		:	next_state = (~i_start) ? 17 : 0; // wait for start to be released

		default	:	begin
						next_state = state + 1;
						i_tap_wr = 1;
					end
	end
end

coefficients coeff_0 (.i_idx(state-1), .o_tap(i_tap)); // memory with coefficients to load

genericfir filter_0 (.i_clk, .i_reset, .i_tap_wr, .i_ce, .i_sample, .o_result)

