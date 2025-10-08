#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  /*
   * char -> un caracter
   * short -> entero corto
   * long -> entero largo
   * double -> punto flotante
   * float -> decimal:
   * int -> entero estandar
   * bool -> booleano (importar stdbool.h), en C++ ya viene por defecto
   * 
   * %d -> entero normal
   * %4d -> entero normal pero con 4 caracteres de amplitud
   * %f -> flotante normal
   * %.4f -> flotante con 4 caracteres despues del punto decimal
   * 
   */

  int fahr, celcius; // signed int
  int lower, upper, step; // table numbers
                         

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  
  puts("Celcius\tFahrenheit");
    
  while (fahr <= upper) { // ciclo while menor o igual
    celcius = 5 * (fahr - 32) / 9; // formula para calcular celcius 
                                   // con fahrenheit
    printf("%d\t%d\n", fahr, celcius);

    fahr += step; // fahr = fahr + step
  }
}
