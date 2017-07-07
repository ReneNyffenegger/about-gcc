//
//  
//  //   use -g flag for addr2line
//  gcc -g -finstrument-functions instrument-functions.c
//
//  // Link with -ldl for dladdr()
//  gcc -finstrument-functions instrument-functions.c -ldl
//

//
//  Using addr2line
//     make sure executable is compiled with -g
//     Use -e to specify executable
//     use -f to show function name
//     execute addr2line with hex representation of addr, for
//     example:
//
//        addr2line  -f -e a.out   0x400641

#include <stdio.h>

#ifdef TRY_dladdr
// define __USE_GNU because apparently dladdr is an extension of GNU.
#define __USE_GNU
#include <dlfcn.h>
#endif



#ifdef TRY_dladdr
void  __attribute__((no_instrument_function)) print_enter_exit(const char* enter_exit, void* func, void* caller) {

  Dl_info dlinfo;
  dladdr(func, &dlinfo);

  printf("** %-5s %-20s, caller: %p\n", enter_exit, dlinfo.dli_sname, caller);

}
#endif

void  __attribute__((no_instrument_function))  // Use this attribute so that this function is not traced
      __cyg_profile_func_enter                 // OSX: use profile_func_enter
   (
    void* func,   // Address of function start. Can be looked up in symbol table with addr2line.
    void* caller  // 
   )
{
//print_enter_exit("enter", func, caller);
  printf("** Entered function %p, caller: %p\n", func, caller);
}

void __attribute__((no_instrument_function))
     __cyg_profile_func_exit                 // OSX: use profile_func_exit
      (
         void* func,
         void* caller
      ) {
  printf("** Leaving function %p, caller: %p\n", func, caller);
}

void
  __attribute__((no_instrument_function)) // Don't trace f4()
  f4() {

    printf("f4\n");

}

void f3() {
  printf("f3\n");
  f4();
}

void f2(int p) {
  printf("f2, p=%d\n", p);
  if (!p) {
    f3();
  }
  f4();
}

void f1(int p) {

  printf("f1, p=%d\n", p);
  if (p) {
     f2(p-1);
  }
  else {
     f3();
     f4();
  }

}

int main() {

  for (int i=0; i<=2; i++) {
     f1(i);
     f4();
  }

}
