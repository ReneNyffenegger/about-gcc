#
#  Create two versions of the program, one thati
#  is compiled with and another that is compiled
#  without the -fshort-wchar option:
#
all: a.out short-wchar

a.out: prog.c
	gcc $< -o $@

short-wchar: prog.c
	gcc -fshort-wchar $< -o $@
