// Remove all blank lines
// Takes filename from command line

#include <stdio.h>
void main(int argc, char * argv[])
{
 FILE * fp, *tfp;
 char line[200], * p;

   // check whether parameter is provided
   if(argc < 2)
   {
       printf("Usage : removeblanklines   filename");
       exit(1);
   }

  // open file for writing
  fp = fopen( argv[1], "rt");
  tfp = fopen("temp.txt","wt");

  // check whether file is successfully opened
  if(fp == NULL)
  {
     printf("Sorry! Could not open %s file. Quitting ...", argv[1]);
     exit(1); // Terminate program with exit code 1
   }

   while(1)
   {
      p =  fgets(line,200,fp);
      if(p  == NULL)
          break;

      //  A line contains \n even if it is blank

      if (strlen(line) > 1)     // Non-blank line
         fprintf(tfp,"%s",line);
   } // while

   fclose(fp);
   fclose(tfp);

   // Delete original file
   remove(argv[1]);
   // Rename temp file to original file
   rename("temp.txt", argv[1]);
}
