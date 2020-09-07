#!/bin/bash
wget -P /tmp https://github.com/DanielVillalba-holberton/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/orn.so
export LD_PRELOAD=/tmp/orn.so
