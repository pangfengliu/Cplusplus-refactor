LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = shared-ptr unique-ptr

input_output_executable = linked-list-unique-main linked-list-shared-main

error_execution = unique-ptr-err memory-leak

linked-list-unique-main: linked-list-unique-main.o linked-list-unique.o
linked-list-shared-main: linked-list-shared-main.o linked-list-shared.o

include ../programmingbook.mk

