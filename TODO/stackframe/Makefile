CFLAGS=-Wall
CFLAGS+=-Werror
CFLAGS+=-W
CFLAGS+=-g


backtrace: main.o src_one.o src_two.o backtrace.o
	$(CC) $(LDFLAGS) $^ -o $@

main.o: main.c src_one.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

src_one.o: src_one.c src_two.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

src_two.o: src_two.c backtrace.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

backgtrace.o: backtrace.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@
