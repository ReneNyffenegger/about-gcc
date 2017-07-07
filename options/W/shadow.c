//
//     -Wshadow:
//      Wanr about local variables shadowing another variable.
//
// gcc -Wshadow shadow.c

#include <stdio.h>

int main() {

  int i = 42;

  if (i == 42) {

    printf("i=%d\n", i);
    int i = 49;
    printf("i=%d\n", i);

  }

}
