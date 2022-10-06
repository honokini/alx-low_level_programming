#!/bin/bash
gcc -Wall -pedantic -Werror -c *.c
ar liball.a *.o
