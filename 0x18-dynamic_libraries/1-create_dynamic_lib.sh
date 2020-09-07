#!/bin/bash
gcc -c -Wall -Wextra -Werror -fpic *.c
gcc -shared -o liball.so *.o
