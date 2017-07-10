all: print-functions

main.o: main.c print_function.h funcs.h
	gcc -c main.c

funcs.o: funcs.c print_function.h funcs.h
	gcc -c funcs.c

print-functions: funcs.o main.o
	gcc funcs.o main.o -o print-functions

