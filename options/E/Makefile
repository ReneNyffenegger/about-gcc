#
#    -E: 
#         Invoke preprocessor only (don't invoke c-compiler).
#         Output is sent to standard out.
#

all: E

E: main.o
	gcc main.o -o E

main.o: main.i
	gcc -c main.i

main.i: main.c
	gcc -E main.c > main.i
