// This is a comment

/* Here's another comment */

#define NUM 42 // This C++ Style comment is converted to a C style comments with -CC. With -C, it's removed.

int returnValue() {
  return NUM;
}

int main() {
  return returnValue();
}
