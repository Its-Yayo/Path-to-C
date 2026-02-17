/*
Dado un positivo N, se imprime sucesivamente su valor (multiplicado por 2) hasta que el resultado sea mayor o igual a 0
El valor limite se debe declarar como constante

 
in -> 4 
out -> 8 16 32 64 128

*/

#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 100


int main(void) {
  int x; // stdin
  scanf("%i", &x); // pide valor de entrada
  
  while (x <= MAXIMO) {
    x *= 2;
    printf("%i ", x);
  }
}
