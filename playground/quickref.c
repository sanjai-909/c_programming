#include <stdio.h>

#define tokenpaster(n) printf ("token" #n " = %d", token##n)



int main(void) {
  int token34 = 40;
  tokenpaster(34);

    putchar('\n');
  return 0;
}
