#include <stdio.h>

void print_backtrace() {

  void *return_addr = __builtin_return_address(0);

  if (return_addr) { printf("%018p\n", return_addr); return_addr = __builtin_return_address(1); }
  if (return_addr) { printf("%018p\n", return_addr); return_addr = __builtin_return_address(2); }
  if (return_addr) { printf("%018p\n", return_addr); return_addr = __builtin_return_address(3); }
  if (return_addr) { printf("%018p\n", return_addr); return_addr = __builtin_return_address(4); }
  if (return_addr) { printf("%018p\n", return_addr); return_addr = __builtin_return_address(5); }

}
