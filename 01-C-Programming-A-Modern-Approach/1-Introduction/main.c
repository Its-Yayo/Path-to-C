/*
 * Function to compute a single program that deploys how many bills bank has to deliver
 * 
 * Ej:
 * 55 bills 
 * 55 / 20 = 2 (res -> 55 - 40 = 15)
 * 15 / 10 = 1 (res -> 15 - 10 = 5)
 * 5 / 5 = 1 (res -> 5 - 5 = 0)
 * end of loop
 *
 * 98 bills
 * 98 / 20 = 4 (res -> 98 - 80 = 18)
 * 18 / 10 = 1 (res -> 18 - 10 = 8)
 * 8 / 5 = 1 (res -> 8 - 5 = 3)
 * 3 < 5
 * end of loop
 * Hooyeah */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(void) {
  int amount = 98;
  
	int amount_1 = amount / 20;
  printf("Amount of $20: %d\n", amount_1);

  if (amount_1 >= 2) {
    int amount_1_1 = amount - (20 * amount_1);
    int amount_2 = amount_1_1 / 10;
    
    printf("Amount of $10: %d\n", amount_2);

    int amount_2_1 = amount_1_1 - (10 * amount_2);
    int amount_3 = amount_2_1 / 5;

    if (amount_3 > 0 && amount_3 <= 4) {  
      amount_3 += 1;
    }

    printf("Amount of $5: %d\n", amount_3);
  }


}






