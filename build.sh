#!/bin/bash
verilator -Wall -cc --trace filter_control.sv --exe firsim.cpp
cd obj_dir
make -j4 -f Vfilter_control.mk
