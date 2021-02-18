// Pass by reference or address
void swap(int * a, int * b)
{
  int temp;

     temp = *a;
     *a = *b;
     *b = temp;
}

void main()
{
  int x = 10, y  = 20;

      swap(&x,&y);
      printf("%d %d", x,y);
}
