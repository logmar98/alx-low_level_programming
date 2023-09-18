#!/bin/bash
gcc -c -Wall -wextra -Werror -pedantic -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
