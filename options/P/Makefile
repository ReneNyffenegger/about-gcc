all: main_p.i main.i

main.o: main.i
	gcc -c $< -o $@

main_p.i: main.c foo.h
	gcc -E -P $< -o $@

main.i: main.c foo.h
	gcc -E $< -o $@
