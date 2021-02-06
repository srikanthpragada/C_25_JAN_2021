// Display all odd numbers between two given numbers

#include <stdio.h>

void main()
{
   int start,end;

       printf("Enter two numbers :");
       scanf("%d%d",&start,&end);

       // If start is even number then take next odd number
       if (start % 2 == 0)
         start ++;

       while(start <= end)
       {
         printf("%d ",start);
         start += 2;
       }
}
