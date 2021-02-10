
void main()
{
   char ch;

      printf("Enter character :");
      ch = getchar();

      if(ch >= 'A' && ch <= 'Z')
          printf("Uppercase");
      else
        if(ch >= 'a' && ch <= 'z')
            printf("Lowercase");
        else
            printf("Some other char");
}
