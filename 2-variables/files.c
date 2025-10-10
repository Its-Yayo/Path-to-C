#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /*
   * getchar() -> lee siguiente caracter dentro de una secuencia de
   * texto
   *
   * putchar(args) -> escribe el caracter cada vez que se invoca  
   *
   * getchar() -> lee solo un caracter, a diferencia de scanf() que 
   * lee algo en la entrada (stdin)
   *
   * putchar(args) -> solo inserta lo que getchar() leyo
   */ 

  long c; // entero largo

  c = 0;

  // EOF -> End of File
  // Cada vez que iteremos, le sumaremos un valor a C hasta llegar a 
  // EOF
  // read() -> si hay EOF
  // pero en este caso no hay
  while (getchar() != EOF) {
    // Escribe el caracter y vuelve a leer el siguiente sucesivamente
    c++; // c = c + 1 || c =+ 1

    printf("%ld\n", c);

  }
}
