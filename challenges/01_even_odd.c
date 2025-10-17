#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/*
Even or Odd Checker
   - Input: An integer
   - Output: Whether it's even or odd
*/
int isEven(int t_integer) {
   if (t_integer % 2 == 0) {
      return TRUE;
   } else {
      return FALSE;
   }
}


int main(int argc, char *argv[]) {
   if (argc < 2) {
        printf("Usage: %s <integer>\n", argv[0]);
        return 1;
   }

   // print even/odd based on input
   int input = atoi(argv[1]);
   if (isEven(input)) {
      printf("%d is even.\n", input);
   } else {
      printf("%d is odd.\n", input);
   }

   return 0;
}
