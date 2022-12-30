CXX = g++

CPPFLAGS = -std=c++11 -Wall

# Makefile in subdir will define
# outputonly_executable: executables for output only programs
# input_output_executable: executables for input/output programs

# based on the previous two we have the followings.

# results from output only programs (by adding .outonly)
outputonly_results = $(outputonly_executable:%=%.outonly)

# results from input/output programs (by adding .out)
input_output_results = $(input_output_executable:%=%.out)

# all executables and results
executable_files = $(outputonly_executable) $(input_output_executable) $(error_execution)

result_files = $(outputonly_results) $(input_output_results)

pdf = $(dot:%=%.pdf)

results: $(result_files)
executables: $(executable_files)
dotpdf: $(pdf)

%.out: % %.in
	./$< < $<.in > $@

%.outonly: %
	./$< > $@
	mv $@ $<.out

# name of subdir
base = $(notdir $(CURDIR))

# make slide pdf
slide.pdf: slide.tex
	pdflatex slide.tex

# make slide.tex
slide.tex: $(base).tex
	echo `basename $(CURDIR)`
	../utility/slider < $(CURDIR)/`basename $(CURDIR)`.tex

%.cc : %.c
	sed "s/stdio.h>/iostream> using namespace std;/" $< > $@

%.pdf: %.dot
	dot -Tpdf $< > $@

# remove files
clean:
	rm -f $(executable_files) *~ *.aux *.log *.nav *.snm *.toc *.vrb a.out *.o *.outonly $(tmp_files)

