// Program to display total and average marks
#include <stdio.h>

void main()
{
   int m1,m2,total;
   float average;


      printf("Enter marks in two subject : ");
      scanf("%d%d",&m1,&m2);

      total = m1 + m2;
      average = total / 2.0;

      printf("Total = %d, Average = %.2f", total, average);

}
