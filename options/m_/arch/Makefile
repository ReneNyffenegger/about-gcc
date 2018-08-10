a.out: prog_native.s
	gcc $<

prog_native.s: prog.c Makefile
	gcc -march=native -S $< -o $@
