module filter_control
(
	input logic i_clk, i_reset,
	input logic i_ce,
	input logic i_start, // active low
	input logic [15:0] i_sample,
	output logic [15:0] o_result
);


logic [15:0] state, next_state; // state machine

logic [8:0] i_idx; // index for tap coefficient in memory
logic i_tap_wr; // active high
logic [15:0] i_tap; // new tap input

logic [31:0] out;

logic [31:0] impulse;

logic [15:0] i_taps_arr_0 [102:0];

initial begin
	$readmemh("taps.dat",i_taps_arr_0);
end

// assign o_result = out[15:0];

always_ff @ (posedge i_clk) begin
	if (~i_reset) 
		state <= 0;
	else
		state <= next_state;
end

logic [31:0] tap, tap_new;

initial tap = 32'b01000100010010000000000000000000;

always_ff @ (posedge i_clk) begin
	if (state > 0 && state < 128)
		tap <= tap_new;
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

		128 	:	begin
						next_state = (~i_start) ? 128 : 0; // wait for start to be released
						i_tap_wr = 0;
					end

		default	:	begin
						next_state = state + 1;
						i_tap_wr = 1;
					end
	endcase
end

logic [15:0] counter;

logic [31:0] o_float;

always_ff @ (posedge i_clk) begin
	counter <= (counter == 200) ? 0 : counter + 1;
	impulse <= (counter == 200) ? 32'b00111111100000000000000000000000 : 0;
end

Addition_Subtraction add_0 (.a_operand(tap), .b_operand(32'b00111111100000000000000000000000), .AddBar_Sub(0), .result(tap_new));

slowfil fir_0 (.i_clk, .i_reset(~i_reset), .i_tap_wr, .i_ce, .i_sample(impulse), .o_result(out), .i_tap(tap));

Floating_Point_to_Integer convert_0 (.a_operand(out), .Integer(o_result));

fixed_to_float fixed_0 (.i_fixed(i_sample), .o_float);

endmodule


