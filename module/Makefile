CXX = g++
LINK.o = $(LINK.cc)

outputonly_executable = vector vector-init 

input_output_executable = life-main ttt-main mirror-main circle-main basic-main vector-find

life-main: life.o life-main.o
ttt-main: ttt.o ttt-main.o
mirror-main: room.o movement.o mirror-main.o
circle-main: board.o movement.o circle-main.o
basic-main: statement.o variableSet.o basic-main.o

include ../programmingbook.mk

