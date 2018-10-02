// This is a comment
/* Here's another comment */
int returnValue() {
  return 42 /* This C++ Style comment is converted to a C style comments with -CC. With -C, it's removed.*/;
}
int main() {
  return returnValue();
}
