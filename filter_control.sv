module filter_control
(
	input logic i_clk, i_reset,
	input logic i_start, // active low
	// input logic [15:0] i_sample, *USED FOR EARLY SIM TESTING*
	output logic [38:0] o_result,
	input logic i2s_sck, // i2s bit clock
	input logic i2s_ws, // i2s word select
	input logic i2s_sda, // i2s bitstream input
	output logic i_ce // gate for filter logic
);


logic [15:0] state, next_state; // state machine

logic [15:0] i_idx; // index for tap coefficient in memory
logic i_tap_wr; // active high
logic [15:0] i_tap; // new tap input

logic [15:0] left_channel, right_channel; // outputs from i2s master

logic i2s_wsp; // used to signal new sample ready for filter

logic i_ce_flag_1, i_ce_flag_2;

always_ff @ (posedge i2s_sck) begin
	if (~i_reset) begin
		i_ce_flag_1 <= 0;
		i_ce_flag_2 <= 0;
	end
end

// block to mostly control the CE bit when a new sample is
always_ff @ (posedge i_clk) begin
	if (~i_reset) begin
		state <= 0;
	end
	else
		state <= next_state;


	if (i2s_wsp && (~i2s_ws)) begin
		i_ce <= 1;
		i_ce_flag_1 <= 1;
	end

	// if (i_ce_flag_1)
	// 	i_ce_flag_2 <= 1;

	//if (i_ce_flag_2) begin
	if (i_ce_flag_1) begin

		i_ce <= 0;

		if (~i2s_wsp) begin
			//i_ce_flag_2 <= 0;
			i_ce_flag_1 <= 0;
		end
	end
end

always_comb begin

	// i_ce = i2s_wsp && (~i2s_ws); // set i_ce high when a new left channel sample is ready

	/* verilator lint_off WIDTH */
	i_idx = (state) ? (state - 1) : 0; // i_idx should be state-1 for state > 0
	/* verilator lint_on WIDTH */

	case (state) // taps loading state machine
		0 		:	begin
						next_state = (i_start) ? 0 : 1; // start fsm with active_low start
						i_tap_wr = 0;
					end

		103 	:	begin
						next_state = (~i_start) ? 16 : 0; // wait for start to be released
						i_tap_wr = 0;
					end

		default	:	begin
						next_state = state + 1;
						i_tap_wr = 1;
					end
	endcase
end


slowfil filter_0 (				
						.i_clk, 
						.i_reset(~i_reset), 
						.i_tap_wr, 
						.i_tap(i_idx), 
						.i_ce, 
						.i_sample(left_channel), 
						.o_result
						); // top level for FIR filter

i2s_master i2s_m0 (		.sck(i2s_sck), 
						.ws(i2s_ws), 
						.sd(i2s_sda), 
						.wsp(i2s_wsp),
						.data_left(left_channel), 
						.data_right(right_channel)
						); // i2s receiver from mic


endmodule


