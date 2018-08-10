a.out: prog.s
	gcc $<

prog.s: prog.c Makefile
	gcc -S -fverbose-asm $< -o $@
