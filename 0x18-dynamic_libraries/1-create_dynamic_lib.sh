#!/bin/bash
gcc -fPIC -c *.c
gcc *.c -shared -o liball.so
