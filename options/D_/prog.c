#include <stdio.h>

#define symbol2quotedText(t) #t
#define macroValue2quotedText(t) symbol2quotedText(t)

int main() {
    printf("NUMBER = %d\n", NUMBER);
    printf("TEXT   = %s\n", macroValue2quotedText(TEXT));
    printf("QUOTED = %s\n", QUOTED);
}
