#!/bin/bash
wget -P .. https://raw.github.com/bini34/alx-low_level_programming/main/0x18-dynamic_libraries/librand.so
export LD_PRELOAD="$PWD/../librand.so"
