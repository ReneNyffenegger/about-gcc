#include <stdio.h>

void print_function(void *p) {
  char cmd[128];
  FILE *fp;
  snprintf(cmd, sizeof(cmd), "addr2line -e %s -f %p", "./backtrace", p);
  fp = popen(cmd, "r");
  if (fp) {
    char buf[128];
    while (fgets(buf, sizeof(buf), fp)) {
      printf("%s\n", buf); 
    }
  }
}

void print_backtrace() {

  void *return_addr = __builtin_return_address(0);

  if (return_addr) { printf("%018p\n", /*,  printf(*/ return_addr); return_addr = __builtin_return_address(1); }
//if (return_addr) {/* printf("%018p\n", */ printf(return_addr); return_addr = __builtin_return_address(2); }
//if (return_addr) {/* printf("%018p\n", */ printf(return_addr); return_addr = __builtin_return_address(3); }
//if (return_addr) {/* printf("%018p\n", */ printf(return_addr); return_addr = __builtin_return_address(4); }
//if (return_addr) {/* printf("%018p\n", */ printf(return_addr); return_addr = __builtin_return_address(5); }

}
