a.out: prog.o
	@gcc -Wl,-t $^ -o $@

prog.o: prog.c
	@gcc -c $< -o $@
