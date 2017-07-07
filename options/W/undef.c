//
//   -Wundef:
//      Warn if an undefined macro is evaluated
//      in an #if construct.
//      

#include <stdio.h>


int main() {

#if UNDEFINED_MACRO > 5
  printf("UNDEFINED_MACRO is defined!!!\n");
#endif
  printf("Hello world\n");

}
