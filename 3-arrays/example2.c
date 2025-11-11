#include <stdio.h>
#include <stdlib.h>

int moving_arrays(int[][] *array) {
  // TODO here
}

int main(void) {
  int myArray[] = {4, 5, 6, 7};
  int size = sizeof(myArray) / sizeof(myArray[0]);

  for (int i = 0; i < size; i++) {
    printf("%d ", myArray[i] * 3);
  }
}
