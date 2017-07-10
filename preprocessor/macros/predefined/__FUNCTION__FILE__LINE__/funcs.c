#include "print_function.h"
#include "funcs.h"

void func_a(const char* txt) {
  PRINT_FUNCTION(txt);
}

void func_b(const char* txt) {
  char buf[100]; // beware the buffer overflows…
  sprintf(buf, "txt = %s", txt);
  PRINT_FUNCTION(buf);
}
