// Largest of 5 strings

#include <stdio.h>
#include <string.h>

void main()
{
  int i;
  char st[20], largest [20];

     strcpy(largest,"");
     for(i = 1; i <= 5; i ++)
     {
        printf("Enter string :");
        gets(st);
        if(strcmp(st,largest) > 0)
           strcpy(largest,st);
     }
     printf("Largest = %s", largest);
}
