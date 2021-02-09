// Common Factors

#include <stdio.h>

void main()
{
  int num1, num2, small, i;

     // printf("Enter two numbers :");
     // scanf("%d%d",&num1,&num2);
     num1 = 120;
     num2 = 60;

     small = num1 < num2 ? num1 : num2;

     for(i = 2; i <= small/2 ; i ++)
     {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("%d ",i);
        }
     }
}
