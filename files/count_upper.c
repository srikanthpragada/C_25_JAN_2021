// Take a file from user and display how many uppercase letters the file has

#include <stdio.h>

void main()
{
   FILE * fp;
   int ch, count = 0;
   char filename [50];

       printf("Enter filename :");
       gets(filename);

       fp = fopen(filename, "rt");
       if (fp == NULL)
       {
           printf("Sorry! Could not open file!");
           exit(1);
       }

       while(1)
       {
           ch = fgetc(fp);
           if (ch == EOF)
              break;

          if ( isupper(ch))
             count ++;
       }
       fclose(fp);

       printf("No. of uppercase letters = %d", count);

}
