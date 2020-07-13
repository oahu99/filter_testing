module fixed_to_float (
	input 	logic 	[15:0] 	i_fixed,
	output 	logic 	[31:0] 	o_float
	);
	
	// registers for state machine operation
	logic 	[5:0] 	state, next_state;

	// register to hold value for exponent bits
	logic 	[7:0] 	exponent;

	// register for single sign bit
	logic			sign;

	// fractional mantissa bits
	logic	[22:0]	mantissa;

	// register to hold converted 2's complement value
	logic	[15:0]	unsigned_fixed;

	// set exponent based on most significant bit value in fixed representation
	always_comb begin : proc_exponent

		sign = i_fixed[15];
		unsigned_fixed = (sign) ? (~i_fixed + 1) : i_fixed; // convert from 2's compliment
		o_float = {sign, exponent, mantissa};

		if (unsigned_fixed[14]) begin
			exponent = 141;
			mantissa = {unsigned_fixed[13:0],9'd0};
		end

		else if (unsigned_fixed[13]) begin
			exponent = 140;
			mantissa = {unsigned_fixed[12:0],10'd0};
		end

		else if (unsigned_fixed[12]) begin
			exponent = 139;
			mantissa = {unsigned_fixed[11:0],11'd0};
		end

		else if (unsigned_fixed[11]) begin
			exponent = 138;
			mantissa = {unsigned_fixed[10:0],12'd0};
		end

		else if (unsigned_fixed[10]) begin
			exponent = 137;
			mantissa = {unsigned_fixed[9:0],13'd0};
		end

		else if (unsigned_fixed[9]) begin
			exponent = 136;
			mantissa = {unsigned_fixed[8:0],14'd0};
		end

		else if (unsigned_fixed[8]) begin
			exponent = 135;
			mantissa = {unsigned_fixed[7:0],15'd0};
		end

		else if (unsigned_fixed[7]) begin
			exponent = 134;
			mantissa = {unsigned_fixed[6:0],16'd0};
		end

		else if (unsigned_fixed[6]) begin
			exponent = 133;
			mantissa = {unsigned_fixed[5:0],17'd0};
		end

		else if (unsigned_fixed[5]) begin
			exponent = 132;
			mantissa = {unsigned_fixed[4:0],18'd0};
		end

		else if (unsigned_fixed[4]) begin
			exponent = 131;
			mantissa = {unsigned_fixed[3:0],19'd0};
		end

		else if (unsigned_fixed[3]) begin
			exponent = 130;
			mantissa = {unsigned_fixed[2:0],20'd0};
		end

		else if (unsigned_fixed[2]) begin
			exponent = 129;
			mantissa = {unsigned_fixed[1:0],21'd0};
		end

		else if (unsigned_fixed[1]) begin
			exponent = 128;
			mantissa = {unsigned_fixed[0],22'd0};
		end

		else if (unsigned_fixed[0]) begin
			exponent = 127;
			mantissa = 0;
		end

	end


endmodule : fixed_to_float