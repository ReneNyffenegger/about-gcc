#include <stdio.h>

//  CONCAT(foo, bar) -> foobar
#define CONCAT(id1, id2) id1##id2


int main() {

  // Declare a variable named FooBar:
  int CONCAT(Foo, Bar);

  FooBar = 42;

  printf("FooBar = %d\n", FooBar);

}
