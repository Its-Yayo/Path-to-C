/* Copyright (c) 2026 Yayo. All Rights Reserved.
 *
 * Mini shell written in C
 * 
 * I promise myself I'm gonnna finish this(1)
 * 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// #include <bool.h>
#include <string.h>


int 
main(void) {
  // Stack for input
  char input[300];

  while (1) {
    printf("> ");
    fgets(input, sizeof(input), stdin);
    printf("You typed %s", input); 
    
    // "\n" cleaned for \0 that fgets(3) generates
    input[strcspn(input, "\n")] = '\0';
    
    // tokenize
    

    if (strcmp(input, "exit") == 0) {
      break;
    } else {
      continue;
    }
  }

}
