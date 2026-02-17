#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// constante
#define NUMBER 0

int global_arr[] = {4, 3, 2, 5, 3}; 


int main(void) {
  // int arr[] = {4, 3, 5, 2, 4, 5, 1};
  // int arr2[7] = {}; 
  int size = sizeof(global_arr) / sizeof(global_arr[0]); // Para calcular la longitud
                                           // del arreglo, se calcula 
                                           // su tamano en bytes sobre
                                           // sobre el tamano en bytes
                                           // del primer elemento
  
  // int size2 = sizeof(arr2) / sizeof(arr2[0]);

  for (int i = 0; i < size; i++) {
    printf("%i\n", global_arr[i]); // arr[i] itera sobre cada elemento del 
                            // arreglo
                            
    // Si nosotros le ponemos una condicion igual a size, va a pasar lo siguiente
    // 0 (elemento) -> 1 (size), 1 -> 2..... 6 -> 7, 7 ? -> 8 (direccion de memoria falsa) 
  }

  puts("---------------");

  printf("El tamano en bytes de ese arreglo es: %i\n", size);
  printf("%i\n", global_arr[3]); // Imprimir el 4to elemento de la lista
  printf("Memoria falsa: %i\n", global_arr[9]); // esto esta mal, no hay un elemento 7, direccion de memoria falsa
  
  puts("--------------------------------");
  
  // TODO -> Checar append_array()
  // printf("Le agregamos nuevo valor: 8, se lo arreglamos\n", append_array(arr, 8));

  // printf("%i", arr);

}
