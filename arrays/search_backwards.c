// Search backwards

#include <stdio.h>

void main()
{
   int a [10];
   int i,sn,found;

      srand(time(0)); // Initialize random seed

      for(i = 0; i < 10; i ++)
      {
         a[i] = rand() % 100;
         printf("%5d", a[i]);
      }

      printf("\nEnter a number :");
      scanf("%d",&sn);

      found = 0;
      for(i = 9; i >= 0; i --)
      {
          if (a[i] == sn) {
            printf("\nFound at %d", i);
            found = 1;
            break;
          }
      }

      if(!found)
        printf("Sorry! Number not found!");

}
