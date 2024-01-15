#!/bin/bash
gcc -fpic -c *.c
gcc -shared *.o -o libdynamic.so
