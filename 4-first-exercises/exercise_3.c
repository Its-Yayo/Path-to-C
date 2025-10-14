/*
Ejercicio 3: Clasificar números
Planteamiento del problema:

Leer una cantidad N de números enteros y determinar cuántos de ellos son positivos, cuántos negativos y cuántos son ceros. El número máximo permitido de entradas debe definirse con #define.

Entrada:

La primera línea contiene un entero N.
La segunda línea contiene N números enteros separados por espacios.

Salida:

Tres líneas con la cantidad de números positivos, negativos y ceros, respectivamente. Cada línea debe comenzar con el texto correspondiente.

Ejemplo:

in -> 5  
-3 0 7 -1 4  
out ->  
Positivos: 2  
Negativos: 2  
Ceros: 1
*/

// if (scanf("%d", &i) > 0) cont_positivo++

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int n;
  scanf("%i", &n);
  
  // Aqui esta el problema FIXME
  int array[n];
  scanf("%i", &array);

  // debug
  puts("-----");
  printf("%i\n", n);
  printf("%i\n", array);

  int cont_positivo = 0;
  int cont_negativo = 0;
  int cont_ceros = 0;
  
  // Logica para iterar sobre el arreglo
  
  for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
    if (array[i] > 0) cont_positivo++;
    else if (array[i] < 0) cont_negativo++;
    else cont_ceros++;
  }

  printf("Positivos: %i\n", cont_positivo);
  printf("Negativos: %i\n", cont_negativo);
  printf("Ceros: %i\n", cont_ceros);

  
}
