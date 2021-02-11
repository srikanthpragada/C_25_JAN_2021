// Take 10 chars and count how many are uppercase letters
#include <stdio.h>
#include <conio.h>

void main()
{
   char ch;
   int i,count = 0;

      for(i = 1; i <= 10; i ++)
      {
        printf("\nEnter character :");
        ch = getche();
        if(isupper(ch))
            count ++;
      }

      printf("\nUppercase chars = %d, Other chars = %d", count, 10-count);

}
