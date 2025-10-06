#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Funciones basicas de prueba
int example_sum(int a, int b) {
  return a + b;
}

bool example_bool(int a, int b) {
  // Condicion simple 
  if (a > b) {
    return 1;
  }
  return 0;
}

int main(void) {
  // Pequena introduccion a C, un lenguaje de programacion de bajo nivel que permite operar desde el baremetal
  // Es un lenguaje estructural donde hay que definir cada tipo de dato y cada estructura de manera firme, a esto se le llama tipado
  // Poco a poco ire avanzando en volverme experto en este lenguaje de programacion fuerte
  
  int a, b; // Aqui definimos 2 enteros
            // vamos a pedirlos como parte del stdin (standard input) para despues mandar llamar la funcion de arriba
  
  scanf("%i", &a); // la %i denota una entrada de tipo entero (numero). "%s" seria para string.h o char[]
  scanf("%i", &b); // la &a y &b denotan una referencia 

  // Llamadas a las funciones especificas
  printf("La suma es: %i\n", example_sum(a, b));
  printf("El valor es: %b\n", example_bool(a, b));
}
