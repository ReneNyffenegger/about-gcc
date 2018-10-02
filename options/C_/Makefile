all: flag_none flag_C flag_CC

flag_none: flag_none.i
	gcc $< -o $@

flag_C: flag_C.i
	gcc $< -o $@

flag_CC: flag_CC.i
	gcc $< -o $@

flag_none.i: prog.c Makefile
	gcc -P -E $< -o $@

flag_C.i: prog.c Makefile
	gcc -P -E -C $< -o $@

flag_CC.i: prog.c Makefile
	gcc -P -E -CC $< -o $@
