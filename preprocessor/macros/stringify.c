#include <stdio.h>

//   QuoteIdent turns an unquoted identifier
//   into a (quoted) string:
//      QuoteIdent(foo) -> "foo"
#define QuoteIdent(ident) #ident

//   QuoteMacro can be used to turn the value
//  (rather then the name/ident)of the macro
//   into a string
#define QuoteMacro(macro) QuoteIdent(macro)


#define FRUIT   strawberry
#define I_LIKE  FRUIT

int main() {
  printf("QuoteIdent(int)    = %s\n", QuoteIdent(int)   );
  printf("QuoteIdent(FRUIT)  = %s\n", QuoteIdent(FRUIT) );
  printf("QuoteMacro(FRUIT)  = %s\n", QuoteMacro(FRUIT) );
  printf("QuoteMacro(I_LIKE) = %s\n", QuoteMacro(I_LIKE));
  printf("QuoteMacro(int)    = %s\n", QuoteMacro(int)   );
}
