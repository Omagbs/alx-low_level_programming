#!/bin/bash
gcc -Wall -pedantic -Werrow -Wextra -c *.c
ar -cr liball.a *.o
