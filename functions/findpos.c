// Return where in first string any char from second string is found
// Return -1 if no char of second string is found in first string

int findpos(char fs[30], char ss[30])
{
  int i,j;

       for(i= 0; ss[i] != '\0'; i ++)
       {
           for(j=0; fs[j] != '\0'; j ++)
           {
              if(fs[j] == ss[i])
                 return j;
           }
       }

       return -1;
}

void main()
{
   char f[] = "Abcd";
   char s[] = "Xyz";

      printf(" %d ",  findpos(f,s));
}
