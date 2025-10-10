#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int array() {
  
}

int main(void) {
  int arr[] = {4, 3, 5, 2, 4, 5, 1};
  int arr2[7] = {}; 
  int size = sizeof(arr) / sizeof(arr[0]); // Para calcular la longitud
                                           // del arreglo, se calcula 
                                           // su tamano en bytes sobre
                                           // sobre el tamano en bytes
                                           // del primer elemento
  
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  for (int i = 0; i < size; i++) {
    printf("%i\n", arr[i]); // arr[i] itera sobre cada elemento del 
                            // arreglo
                            
    // Si nosotros le ponemos una condicion igual a size, va a pasar lo siguiente
    // 0 (elemento) -> 1 (size), 1 -> 2..... 6 -> 7, 7 ? -> 8 (direccion de memoria falsa) 
  }

  puts("---------------");

  printf("El tamano en bytes de ese arreglo es: %i\n", size);
  printf("%i\n", arr[3]); // Imprimir el 4to elemento de la lista
  printf("Memoria falsa: %i\n", arr[7]); // esto esta mal, no hay un elemento 7, direccion de memoria falsa
  
  puts("--------------------------------");

}
