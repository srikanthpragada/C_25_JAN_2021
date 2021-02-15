// Strings until user enters end and display avg. length of strings

#include <stdio.h>
#include <string.h>

void main()
{
  int total, count;
  char st[20];


     count = total = 0;
     while(1)
     {
        printf("Enter name [end to stop]:");
        gets(st);
        if (stricmp(st,"end") == 0 )
            break;
        total += strlen(st);
        count ++;
     }
     printf("Av. Length = %d", total / count);
}
