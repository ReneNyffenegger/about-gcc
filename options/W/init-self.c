//
//   -Winit-self
//        Warn about variables that are initialized with themselves.
//        Option can only be used together with -Wuninitialized.
//
//   gcc -Wuninitialized -Winit-self init-self.c
//

#include <stdio.h>
int main() {

  int i = i;

  printf("i=%d\n", i);

}
