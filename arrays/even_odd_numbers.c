// Display even numbers first and then odd numbers from an array

#include <stdio.h>

void main()
{
   int a[10];
   int i;

      srand(time(0)); // Initialize random seed

      for(i = 0; i < 10; i ++)
      {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
      }

      printf("\n");

      for(i = 0; i < 10; i ++)
      {
         if( a[i] % 2 == 0)
            printf("%d ", a[i]);
      }

      for(i = 0; i < 10; i ++)
      {
         if( a[i] % 2 == 1)
            printf("%d ", a[i]);
      }
}
