// Display all odd numbers between two given numbers

#include <stdio.h>

void main()
{
   int start,end;

       printf("Enter two numbers :");
       scanf("%d%d",&start,&end);

       while(start <= end)
       {
         if (start % 2 == 1)  // odd number
            printf("%d ",start);

         start ++;
       }
}
