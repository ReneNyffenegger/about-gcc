//
//   gcc -Wuninitialized ignored.c
//
#include <stdio.h>

int main() {

  int var_1;
  int var_2;
  int var_3;
  int var_4;

#pragma GCC diagnostic ignored "-Wuninitialized"
  var_3 = var_1;
#pragma GCC diagnostic pop
  var_4 = var_2;

  printf("var_1: %d, var_2: %d\n", var_3, var_4);

}
