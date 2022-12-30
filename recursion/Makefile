LINK.o = $(LINK.cc)

outputonly_executable = eight-queen eight-queen-vector eight-queen-verbose eight-queen-verbose-vector 

input_output_executable = natural fib-recursion gcd-recursion hanoi mouse-maze three-digit three-digit-num maze-main sudoku-main paper-main fib-constexpr fib-no-constexpr fib-compare

maze-main: maze-main.o movement.o position.o maze.o
sudoku-main: sudoku-main.o sudoku.o position.o
paper-main: paper-main.o paper-stack.o

include ../programmingbook.mk

