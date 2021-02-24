// Remove all blank lines

#include <stdio.h>
main()
{
 FILE * fp, *tfp;
 char line[200], * p;


  // open file for writing
  fp = fopen("test.txt", "rt");
  tfp = fopen("temp.txt","wt");

  // check whether file is successfully opened
  if(fp == NULL)
  {
     printf("Sorry! Could not open file. Quitting ...");
     exit(1); // Terminate program with exit code 1
   }

   while(1)
   {
      p =  fgets(line,200,fp);
      if(p  == NULL)
          break;

      if (strlen(line) > 1)     // Non-blank line
         fprintf(tfp,"%s",line);
   } // while

   fclose(fp);
   fclose(tfp);

   // Delete original file
   remove("test.txt");
   rename("temp.txt","test.txt");
}
