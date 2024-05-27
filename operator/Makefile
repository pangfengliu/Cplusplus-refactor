LINK.o = $(LINK.cc)
SHELL := /bin/bash

outputonly_executable = rational-impl-func-para rational-impl-func-para rational-impl-op rational-impl-func-ret rational-expl-func-para rational-expl-op rational-expl-func-ret


input_output_executable = ones-sort rational-main rational-sort rational-sort-algorithm rational-sort-comp ones-sort-algorithm rational-sort-lambda ones-sort-lambda rational-io-main rational-sort-functor rational-io-continue rational-io-break ones-sort-lambda-conv

ones-sort: ones-sort.o ones.o
rational-main: rational-main.o rational.o
rational-sort: rational-sort.o rational.o
rational-sort-algorithm: rational-sort-algorithm.o rational.o
rational-sort-comp: rational-sort-comp.o rational.o
ones-sort-algorithm: ones-sort-algorithm.o ones.o
rational-sort-lambda: rational-sort-lambda.o rational.o
ones-sort-lambda: ones-sort-lambda.o ones.o

rational-io-main: rational-io-main.o rational-io.o rational.o
rational-sort-functor: rational-sort-functor.o rational.o
rational-io-continue: rational-io-continue.o rational.o rational-io-throw.o
rational-io-break: rational-io-break.o rational.o rational-io-throw.o

ones-sort-lambda-conv: ones-sort-lambda-conv.o ones.o

rational-impl-func-para: rational-impl-func-para.o rational-implicit.o
rational-impl-op: rational-impl-op.o rational-implicit.o
rational-impl-func-ret: rational-impl-func-ret.o rational-implicit.o

rational-expl-func-para: rational-expl-func-para.o rational-explicit.o
rational-expl-op: rational-expl-op.o rational-explicit.o
rational-expl-func-ret: rational-expl-func-ret.o rational-explicit.o

time-throw-construct: time-throw-construct.o

include ../programmingbook.mk

