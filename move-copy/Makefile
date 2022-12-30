LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = int-normal \
int-parameter-ref \
int-move-test \
int-copy-test

input_output_executable = list-move-test \
list-copy-test

error_execution = double-delete \
int-assign \
int-constructor \
int-parameter \
list-assign \
list-constructor

int-normal: int-normal.o
int-assign: int-assign.o
int-constructor: int-constructor.o
int-parameter: int-parameter.o
int-parameter-ref: int-parameter-ref.o

list-assign: list-assign.o linked-list.o
list-constructor: list-constructor.o linked-list.o

int-move-test: int-move-test.o
list-move-test: list-move-test.o linked-list.o

int-copy-test: int-copy.o int-copy-test.o
list-copy-test: list-copy-test.o linked-list.o

include ../programmingbook.mk

