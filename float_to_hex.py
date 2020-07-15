import numpy as np
import struct
import sys

def float_to_hex(f):
    return hex(struct.unpack('<I', struct.pack('<f', f))[0])

floatTaps = np.loadtxt(sys.argv[1])

for num in floatTaps:
	print(float_to_hex(num))
