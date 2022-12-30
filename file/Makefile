LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = copy-file copy-file-get-put copy-file-catch append-file modify-file getline var-io cstring-getline binary-text read-write copy-file-eof-func 

input_output_executable = write-student-array seekgp

binary-text: binary-text.o dump-file.o
read-write: read-write.o dump-file.o
write-student-array: write-student-array.o dump-file.o student.o
seekgp: seekgp.o dump-file.o student.o

include ../programmingbook.mk

