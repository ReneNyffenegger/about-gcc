.PHONY: run

run: prog-ok prog-stack-overflow
	./prog-ok
	./prog-stack-overflow

prog-ok: prog.c
	gcc -DALLOCATION_SIZE=20 -fsanitize=address $< -o $@

prog-stack-overflow: prog.c
	gcc -DALLOCATION_SIZE=21 -fsanitize=address $< -o $@
