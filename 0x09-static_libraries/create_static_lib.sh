#!/bin/bash
gcc -wall -werror -waxtra -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a
