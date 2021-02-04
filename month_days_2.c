// No. of days in the given month using switch

#include <stdio.h>

void main()
{
  int month, year;

     printf("Enter month number :");
     scanf("%d",&month);

     switch(month)
     {
         case 2:  printf("Enter year :");
                  scanf("%d",&year);
                  if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // is leap year
                       printf("29");
                  else
                       printf("28");
                  break;
         case 4:
         case 6:
         case 9:
         case 11: printf("30");
                  break;
         default: printf("31");
    }
}
