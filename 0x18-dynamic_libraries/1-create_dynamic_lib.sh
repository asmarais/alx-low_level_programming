#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
gcc -shared *.o -o liball.so
