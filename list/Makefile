LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = foo-new global-locals

input_output_executable = namespace \
linked-list-main \
recursion-print-list \
sum-list \
sorted-list-main \
sorted-list-main-recursion \
sorted-list-remove-main \
memory-main \
merge \
fib

error_execution = foo

linked-list-main: linked-list-main.o linked-list.o
recursion-print-list: recursion-print-list.o linked-list.o

sum-list: sum-list.o linked-list.o

sorted-list-main: sorted-list-main.o sorted-list.o linked-list.o
sorted-list-main-recursion: sorted-list-main.o sorted-list-recursion.o linked-list.o
	g++ -std=c11 -Wall sorted-list-main.o sorted-list-recursion.o linked-list.o -o sorted-list-main-recursion

sorted-list-remove-main: sorted-list-remove-main.o sorted-list-remove.o sorted-list-recursion.o linked-list.o

memory-main: memory-main.o memory.o

merge: linked-list.o linked-lists.o merge.o

fib: fib.o linked-list.o

include ../programmingbook.mk

