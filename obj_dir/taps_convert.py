import numpy as np 

taps_original = np.loadtxt("taps.dat")

for line in taps_original:

	print(hex(int(line)&0xffff))