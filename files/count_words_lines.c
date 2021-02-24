// Count how many lines and words are present in a file
#include <stdio.h>
main()
{
 FILE * fp;
 char ch;
 int words = 0, lines = 0;

  // open file for writing
  fp = fopen("test.txt", "rt");
  // check whether file is successfully opened
  if(fp == NULL)
  {
     printf("Sorry! Could not open file. Quitting ...");
     exit(1); // Terminate program with exit code 1
   }

   while(1)
   {
      ch = fgetc(fp);
      if (ch == EOF)
          break;

      if (ch == ' ')
          words ++;
      else
       if (ch == '\n')
       {
           lines ++;
           words ++;
      }
   } // while

   printf("Words = %d, Lines = %d", words, lines);
   // close file
   fclose(fp);
}
