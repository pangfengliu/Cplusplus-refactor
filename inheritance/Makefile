LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = 

input_output_executable = circle-main maze-main sudoku-main ttt-main life-main mirror-main

life-main : life-main.o life.o board.o position.o
ttt-main : ttt-main.o ttt.o board.o position.o
circle-main: circle-main.o board.o movement.o position.o
maze-main: maze-main.o board.o movement.o position.o maze.o
sudoku-main: sudoku-main.o sudoku.o board.o position.o 
mirror-main: mirror-main.o room.o board.o movement.o position.o


include ../programmingbook.mk

