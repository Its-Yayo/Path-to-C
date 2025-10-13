/*
Ejercicio 2: Contar vocales en una línea
Planteamiento del problema:

Se debe leer una cadena ingresada por el usuario carácter por carácter hasta encontrar un salto de línea (\n). Luego, se debe contar cuántas 
vocales (a, e, i, o, u, sin importar mayúsculas o minúsculas) contiene.

Entrada:

Una línea de texto ingresada por teclado.

Salida:

Una línea con el mensaje:
Número de vocales: X
donde X es el número de vocales encontradas.

Ejemplo:

in -> Hola Mundo  
out -> 4

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static char letters[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; 


// Funcion extra 

int conteo_de_vocales(char *palabra, int cont) {
  if (palabra[] == 'a' || palabra[] == 'e' || palabra[] == 'i' || palabra[] == 'o' || palabra[] == 'u' || palabra[] == 'A' || palabra[] == 'E' || palabra[] == 'I' || palabra[] == 'O' || palabra[] == 'U') {
    cont += 1;
  }

  return cont;
}


int main(void) {
  // Metodologia de Ecodeg
  char palabra[] = "Hola mundo";
  printf("%i", conteo_de_vocales(palabra, 0));
  

  puts("---------------------------------------\n\n");

  // Metodologia de Yayo
  char str[] = "hola mundo";
  // scanf("%[^\n]", &str); // Regex que toma en cuenta los whitespaces
                            // hasta terminar el stdin
  
  // debug
  printf("%s\n", &str);
 
  // init values, arreglar size_str con stdin
  int size_str = sizeof(str) / sizeof(str[0]);
  int size_letters = sizeof(letters) / sizeof(letters[0]);
  int cont = 0;

  printf("%d\n", size_str); // debug
  printf("%i\n\n", size_letters); // debug


  for (int i = 0; i < size_str; i++) {
    for (int j = 0; j < size_letters; j++) {
      if (str[i] == letters[j]) {
        cont += 1;
      }
    } 
  }

  printf("%i\n", cont);
}


