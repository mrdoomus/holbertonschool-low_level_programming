#!/bin/bash
wget https://github.com/mrdoomus/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/hack/libhack.so
LD_PRELOAD=$PWD/libhack.so
