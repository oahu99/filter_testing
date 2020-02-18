#!/bin/bash
verilator -Wall -cc --trace genericfir.v --exe firsim.cpp
cd obj_dir
make -j4 -f Vgenericfir.mk
