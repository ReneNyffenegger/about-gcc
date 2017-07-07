//
//  gcc -ftrapv trapv.c

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
