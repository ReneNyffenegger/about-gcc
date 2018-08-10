all: main_p.o main.o

main_p.o: main_p.i
	gcc -c $< -o $@

main.o: main.i
	gcc -c $< -o $@

main_p.i: main.c foo.h
	gcc -E -P $< -o $@

main.i: main.c foo.h
	gcc -E $< -o $@
