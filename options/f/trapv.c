//
//  gcc -ftrapv trapv.c
//
//    Apparently, there's a bug with -ftrapv:
//      https://gcc.gnu.org/bugzilla/show_bug.cgi?id=35412
//      https://stackoverflow.com/questions/20851061/how-to-make-gcc-ftrapv-work

#include <limits.h>
#include <stdio.h>

int main() {

    int i = INT_MAX;

    printf("i = %d\n", i);

 // -ftrapv causes the program to abort on
 // a signed integer overflow.
    i++;
    printf("i = %d\n", i);

}
