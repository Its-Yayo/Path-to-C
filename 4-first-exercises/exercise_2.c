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


int main(void) {
  char str[] = "";
  scanf("%[^\n]%*c", &str); // Regex que toma en cuenta los whitespaces
                            // hasta terminar el stdin
  
  // debug
  printf("%s\n", str);


  int cont = 0;

  // FIXME
  for (int i = 0; i < strlen(str); i++) {
    for (int j = 0; j < (sizeof(letters) / sizeof(letters[0])); j++) {
      if (str[i] == letters[j]) {
        cont += 1;
      }
    } 
  }

  printf("%i", cont);
}


