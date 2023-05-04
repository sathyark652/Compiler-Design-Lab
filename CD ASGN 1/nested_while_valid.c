#include <stdio.h>

int main() {
   int i = 0, j = 0;
   while (i < 5) {
      while (j < 5) {
         printf("(%d, %d) ", i, j);
         j++;
      }
      i++;
      j = 0;
      printf("\n");
   }
   return 0;
}

