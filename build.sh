#!/bin/bash
verilator -Wall -cc --trace -CFLAGS -g filter_control.sv --exe firsim.cpp
cd obj_dir
make -j32 -f Vfilter_control.mk
