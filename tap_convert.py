import numpy as np 

tapsInts = np.loadtxt("taps.dat")

def tohex(val, nbits):
  return hex((val + (1 << nbits)) % (1 << nbits))

for tap in tapsInts:
	# if (tap < 0):
	# 	print(hex((1 << 16) + int(tap)))
	# else:
	# 	#print(hex(int(tap)&0xFFFF))
	# 	print(hex((0 << 16) + int(tap)))
	print(tohex(int(tap), 16)+",")