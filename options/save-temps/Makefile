#
#    save_temps:
#       store the normally temporary intermediate files (*.s, *.i, *.o) permanently.
#

all: save-temps

save-temps: a.o b.o main.o
	gcc -save-temps a.o b.o main.o -o save-temps

a.o: a.c
	gcc -save-temps -c a.c

b.o: b.c
	gcc -save-temps -c b.c

main.o: main.c
	gcc -save-temps -c main.c

clean:
	rm *.o *.i *.s
