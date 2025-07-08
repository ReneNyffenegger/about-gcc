//
//  https://github.com/soarpenguin/code-sample-c/blob/master/backtrace.c
//
#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>

void backtr() {
    void *callstack[128];

    int    nofsymbols = backtrace(callstack, 128);
    char **symbols    = backtrace_symbols(callstack, nofsymbols);

    for (int i = 0; i < nofsymbols; ++i) {
        printf("%s\n", symbols[i]);
    }

    free(symbols);
}


       void func_D() { backtr(); }
       void func_C() { func_D(); }
static void func_B() { func_C(); } //The name of func_B is not exposed because it is static.
       void func_A() { func_B(); }

       int  main()   { func_A(); }
