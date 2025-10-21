#include <stdio.h>

int main(void) {
  int a = 10;
  int cont = 0;

  // While
  // while (a > 0) {
  //  a -= 1;
  //  cont++;  
  // }

  // Do-while
  do {
    a -= 1;
    cont++;
  } while (a > 0);

  printf("%i\n", cont);
}
