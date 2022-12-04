#!/bin/bash
wget -P /tmp/ https://github.com/ol4juwon/alx-low_level_programming/raw/main/0x18-dynamic_libraries/loadhack.so
export LD_PRELOAD=../loadhack.so
