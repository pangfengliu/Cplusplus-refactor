LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = 

input_output_executable = binding \
static-shape-main \
runtime-shape-main \
basic-virtual

# examples to demonstrae function binding
binding: binding.o board.o maze.o position.o movement.o
static-shape-main: static-shape-main.o
runtime-shape-main: runtime-shape-main.o

# BASIC virtual function implementation
basic-virtual: variableSet.o statement-virtual.o program-virtual.o basic-virtual.o

include ../programmingbook.mk

