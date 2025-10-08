#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /*
   * getchar() -> lee siguiente caracter dentro de una secuencia de
   * texto
   *
   * putchar(args) -> escribe el caracter cada vez que se invoca  
   *
   *
   *
   */

  long c; // entero largo

  c = 0;

  // EOF -> End of File
  // Cada vez que iteremos, le sumaremos un valor a C hasta llegar a 
  // EOF
  while (getchar() != EOF) {
    // Escribe el caracter y vuelve a leer el siguiente sucesivamente
    c++; // c = c + 1 || c =+ 1

    printf("%ld\n", c);

  }
}
