// Take day and hours and display wage

#include <stdio.h>

void main()
{
int day,hours, rate;

   printf("Enter day and hours :");
   scanf("%d%d",&day,&hours);

   switch(day)
   {
    case 1:
    case 2:
    case 3:  rate = 300; break;
    case 4:  rate = 400; break;
    case 5:  rate = 500; break;
    default: rate = 600;
   }

   printf("Wage = %d", hours * rate);
}
