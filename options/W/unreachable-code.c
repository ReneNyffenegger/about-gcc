//
//   -Wunreachable-code was supposed to warn if code was unreachable.
//    It functionality, not the warning, had been removed:
//
//      https://gcc.gnu.org/ml/gcc-help/2011-05/msg00360.html
//

#include <stdio.h>

void f() {
  printf("unreachable");
}

int main() {

  printf("1\n");
  return 0;
  printf("2\n");

}
