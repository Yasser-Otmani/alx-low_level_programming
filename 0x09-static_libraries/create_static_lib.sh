#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liall.a *.o
ranlib liball.a
