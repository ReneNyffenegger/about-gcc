//
//   TODO: See https://github.com/google/sanitizers/wiki/AddressSanitizer
//

#include <stdio.h>


int write_buffer(char* buf, unsigned int size) {
   for (unsigned int pos=0; pos < size; pos++) {
      buf[pos] = (char) pos;
   }
}

int func() {
   char buf[20];
   write_buffer(buf, ALLOCATION_SIZE); // Uh, oh.

   return 42;
}

int main() {
   printf("ALLOCATION_SIZE = %d\n", ALLOCATION_SIZE);
   printf("func returned %d\n", func());
   printf("\n\n");
}
