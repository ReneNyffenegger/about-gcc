//
//  gcc -Wuninitialized uninitialized.c
//

#include <stdio.h>
int main() {

  int f;
  int i = f * 42;

  printf("i=%d\n", i);

}
