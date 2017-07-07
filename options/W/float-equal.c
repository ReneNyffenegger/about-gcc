//
//      -Wfloat-equal:
//        Warn if two floating-point numbers are compared.
//
//  gcc -Wfloat-equal float-equal.c
//

#include <stdio.h>

int main() {

  float f1 = 4.2549342;
  float f2 = 4.2549343;

  if (f1 == f2) {
    printf("f1 == f2\n");
  }
}
