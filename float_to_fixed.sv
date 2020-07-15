module float_to_fixed (
	input logic		[31:0] 	i_float,
	output logic 	[15:0] 	o_fixed
	);

	// register to hold value for exponent bits
	logic 	[7:0] 	exponent;

	// register for single sign bit
	logic			sign;

	// fractional mantissa bits
	logic	[22:0]	mantissa;

	// register to hold unsigned decimal
	logic	[15:0]	unsigned_int;

	assign sign 	= i_float[31];
	assign exponent = i_float[30:23];
	assign mantissa = i_float[22:0];

	always_comb begin : proc_convert

		unsigned_int = 0;

		priority case (exponent)
			141	:	unsigned_int[14:0] 	= {1'b1, mantissa[22:9]	};
			140	:	unsigned_int[13:0] 	= {1'b1, mantissa[22:10]};
			139	:	unsigned_int[12:0] 	= {1'b1, mantissa[22:11]};
			138	:	unsigned_int[11:0] 	= {1'b1, mantissa[22:12]};
			137	:	unsigned_int[10:0] 	= {1'b1, mantissa[22:13]};
			136	:	unsigned_int[9:0] 	= {1'b1, mantissa[22:14]};
			135	:	unsigned_int[8:0] 	= {1'b1, mantissa[22:15]};
			134	:	unsigned_int[7:0] 	= {1'b1, mantissa[22:16]};
			133	:	unsigned_int[6:0] 	= {1'b1, mantissa[22:17]};
			132	:	unsigned_int[5:0] 	= {1'b1, mantissa[22:18]};
			131	:	unsigned_int[4:0] 	= {1'b1, mantissa[22:19]};
			130	:	unsigned_int[3:0] 	= {1'b1, mantissa[22:20]};
			129	:	unsigned_int[2:0] 	= {1'b1, mantissa[22:21]};
			128	:	unsigned_int[1:0] 	= {1'b1, mantissa[22]	};
			127	:	unsigned_int[0] 	= {1'b1					};
			0	:	unsigned_int 		= 16'd0;
		endcase // exponent

		o_fixed = (sign) ? (~unsigned_int + 1) : unsigned_int;

	end : proc_convert

endmodule : float_to_fixed