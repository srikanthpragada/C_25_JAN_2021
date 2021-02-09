// Prime number

#include <stdio.h>

void main()
{
  int num,i,prime = 1; // Flag

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 2; i <= num/2 ; i ++)
     {
        if (num % i == 0)
        {
           prime = 0;  // False
           break;
        }
     }

     if(prime)
        printf("Prime number!");
     else
        printf("Not a Prime number!");
}
