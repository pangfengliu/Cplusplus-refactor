LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = position-main movement-main

input_output_executable = ttt-main mirror-main circle-main life-main basic-main rational-main

dot = basic-class-files life-class-files movement-files circle-class-files mirror-class-files ttt-class-files

position-main: position-main.o position.o
movement-main: movement-main.o movement.o position.o

ttt-main : ttt-main.o ttt.o
mirror-main: mirror-main.o movement.o position.o room.o
circle-main: circle-main.o movement.o position.o
life-main: life-main.o life.o position.o
basic-main: variableSet.o statement.o program.o basic-main.o

rational-main: rational-main.o rational.o
rational-convert: rational-convert.o rational.o

include ../programmingbook.mk

