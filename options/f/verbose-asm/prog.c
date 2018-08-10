//
//  gcc -S -fverbose-asm verbose-asm.c
//    or
//  gcc -S -fverbose-asm verbose-asm.c -Os -o
//
#include <stdio.h>

int main() {

  int i = 6;
  int j = 7;
  int k = 6*7;

  printf("i=%d, j=%d, i*j=%d\n", i, j, k);

}
