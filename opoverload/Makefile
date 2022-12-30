LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = function-main test-input-file 

input_output_executable = and-or-main test-output-file

dot = atom-class  binary-class  function-files  unary-class

# use operator function to implement and/or
and-or-main: and-or.o binary-tree.o read-vector.o rebuild-tree.o and-or-main.o

# use operator function to implement functions
function-main: function-main.o function.o arithmetic.o sincos.o exp.o binary-op.o unary-op.o atom.o

# use array syntax to access a file
test-input-file: dump-file-array.o input-file.o test-input-file.o
test-output-file: dump-file-array.o input-file.o output-file.o test-output-file.o 

include ../programmingbook.mk

