LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = fib-reducer hanoi-reducer queen-reducer \
fib-reducer-type hanoi-reducer-type queen-reducer-type

input_output_executable = fib-template balance \
test-output-file-template \
hanoi-template queen-template \
queen-dfs-main hanoi-dfs-main fib-dfs

error_executable =

tmp_files = int_8 int_16 int_32 int_64

pdf: all-dfs.pdf  all-template.pdf  balance.pdf  fib-dfs.pdf  fib-template.pdf dfs-reducer.pdf


# Stack template examples
fib-template: fib-template.o
balance: balance.o
hanoi-template: hanoi-template.o move-stones.o
queen-template: queen-template.o queen.o

test-output-file-template: test-output-file-template.o dump-file-array.o input-file.o


# DFS examples
hanoi-dfs-main: hanoi-dfs-main.o move-stones-dfs.o
queen-dfs-main: queen-dfs-main.o queen-dfs.o
fib-dfs-main: fib-dfs-main.o fib-dfs.o

# Reducer examples
fib-reducer: fib-reducer.o
hanoi-reducer: hanoi-reducer.o
queen-reducer: queen-reducer.o

fib-reducer-type: fib-reducer-type.o
hanoi-reducer-type: hanoi-reducer-type.o
queen-reducer-type: queen-reducer-type.o

include ../programmingbook.mk
