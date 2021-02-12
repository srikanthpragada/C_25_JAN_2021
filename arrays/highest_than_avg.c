// Display numbers that are > average of the array

#include <stdio.h>

void main()
{
   int a[10];
   int i, total = 0, avg;

      srand(time(0)); // Initialize random seed

      for(i = 0; i < 10; i ++)
      {
        a[i] = rand() % 100;
        total += a[i];
        printf("%d ", a[i]);
      }

      avg = total / 10;

      printf("\nValues > %d (Average) \n",avg);

      for(i = 0; i < 10; i ++)
      {
         if(a[i] > avg)
            printf("%d ", a[i]);
      }
}
