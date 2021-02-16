// Return true if string has an uppercase letter
int hasupper(char st[30])
{
  int i;

     for(i = 0; st[i] != '\0'; i ++)
     {
        if(isupper(st[i]) )
            return 1; // found uppercase
     }
     return 0; // not found
}

void main()
{
   char s[] = "Hello!";

      printf("%d ", hasupper(s));
}
