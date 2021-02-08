// Display sum of even numbers for given numbers

#include <stdio.h>

void main()
{
   int num,i, total = 0;

       for(i = 1; i <= 5 ; i ++)
       {
          printf("Enter a number :");
          scanf("%d",&num);

          if(num % 2 == 0)
             total += num;
       }

       printf("Total = %d", total);
}
