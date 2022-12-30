LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = 

input_output_executable = binary-tree-main binary-search-tree-main \
reverse-order \
rebuild-tree-main \
and-or-func-main \
bst-and-or-func-main \
and-or-tree-main \
btree-and-or-main \
bst-and-or-main

# and-or-tree-move-main 

binary-tree-main: binary-tree.o binary-tree-main.o
binary-search-tree-main: binary-search-tree-main.o binary-search-tree.o binary-tree.o
reverse-order: reverse-order.o binary-search-tree.o binary-tree.o

rebuild-tree-main: rebuild-tree-main.o rebuild-tree.o read-vector.o binary-tree.o

# top level function implementation for and/or
and-or-func-main: and-or-func.o and-or-func-main.o binary-tree.o read-vector.o rebuild-tree.o
bst-and-or-func-main: and-or-func.o bst-and-or-func-main.o binary-tree.o read-vector.o binary-search-tree.o

# inherited class implemntation for and/or
and-or-tree-main: and-or-tree.o and-or-tree-main.o binary-tree.o read-vector.o rebuild-tree.o

# new class implemntation for and/or
btree-and-or-main: btree-and-or-main.o btree-and-or.o read-vector.o rebuild-tree.o
bst-and-or-main: bst-and-or-main.o btree-and-or.o read-vector.o bst-and-or.o

include ../programmingbook.mk

