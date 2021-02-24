#include <stdio.h> // must include stdio.h
main()
{
 FILE * fp;
 char ch;

  // open file for writing
  fp = fopen("alpha.txt", "wt");
  // check whether file is successfully opened
  if(fp == NULL)
  {
     printf("File cannot be created. Quitting ...");
     exit(1); // Terminate program with exit code 1
   }

   // write uppercase letters
   for(ch = 65; ch <= 90; ch++)
      fprintf(fp,"%c\n",ch); // write one char at a time

   // close file
   fclose(fp);
}
