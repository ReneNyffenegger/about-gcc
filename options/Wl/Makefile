a.out: prog.o func.o
	@gcc -Wl,-t $^ -o $@

prog.o: prog.c
	@gcc -c $< -o $@
