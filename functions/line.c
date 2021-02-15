// Print lines before and after message

void line(int length)
{
 int i;

  for(i = 1; i <= length; i ++)
     putch('=');
}

void main()
{

  line(20); // call to function
  printf("\nSrikanth Technologies\n");
  line(30);

}
