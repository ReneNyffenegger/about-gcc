struct tq84_struct {
  int i;
} __attribute__ ((deprecated));

__attribute__((deprecated)) int func() {
  return 42;
}

int main() {

   struct tq84_struct s;

   int    tq84_var   __attribute((deprecated));
   int    y;

   s.i      = 42;
   tq84_var = 42;
   y        = func();

}
