a.out: prog.o func.o
	gcc -Wl,-t $^ -o $@

prog.o: prog.c func.h
	@gcc -c $< -o $@

func.o: func.c func.h
	@gcc -c $< -o $@
