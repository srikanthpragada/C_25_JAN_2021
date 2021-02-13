// Reverse an array in-place

#include <stdio.h>

void main()
{
   int a [10];
   int i,j,temp;

      srand(time(0)); // Initialize random seed

      for(i = 0; i < 10; i ++)
      {
         a[i] = rand() % 100;
         printf("%5d", a[i]);
      }

      // Interchange first 5 elements with last 5
      for(i = 0, j  = 9; i < 5; i ++, j --)
      {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }

      printf("\nAfter Interchange\n");

      for(i = 0; i < 10; i ++)
      {
         printf("%5d", a[i]);
      }


}
