all: no-protection.S  stack-protector.S stack-protector-strong.S

no-protection.S: func.c
	gcc -S -masm=intel $< -o $@

stack-protector.S: func.c
	gcc -S -masm=intel $< -o $@ -fstack-protector

stack-protector-strong.S: func.c
	gcc -S -masm=intel $< -o $@ -fstack-protector-strong
