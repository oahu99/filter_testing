module remove_dc #(
	parameter ACCUMULATE_NUM=2048
	)(
		input logic clk, rst,
		input logic [15:0] gain,
		input logic [15:0] mic_in,
		output logic [15:0] mic_out
	);
	logic calibrate;
	assign calibrate = 1;
	logic [127:0] state, next_state;
	logic signed [127:0] offset, accumulate;
	logic signed [127:0] mic_in_sext, mic_out_sext;

	assign mic_in_sext = {{112{mic_in[15]}},mic_in};
//	assign mic_out = mic_out_sext[18:3];

	always_ff @ (posedge clk) begin
		if (rst) begin
			state <= 0;
			// offset <= 0;
			// accumulate <= 0;
		end
		else
			state <= next_state;
	end
	logic done;
	initial done = 0;
	always_comb begin
		if (state == ACCUMULATE_NUM) begin
			next_state = 0;
			done = 1;
		end
		else if (!done)
			next_state = state + 1;
		else
			next_state = 0;

		// mic_out = (mic_in - (offset/ACCUMULATE_NUM)); 
		mic_out = 4*(mic_in - offset/ACCUMULATE_NUM);

	end

	always_ff @ (posedge clk) begin
		if (rst) begin
			accumulate <= 0;
			offset <= 0;
		end
		else if (state < ACCUMULATE_NUM)
			accumulate <= accumulate + mic_in;
		else if (state == ACCUMULATE_NUM) begin
			offset <= accumulate;
			accumulate <= 0;
		end
	end

endmodule