
void reverse(int n)
{
   if (n > 0)
   {
       printf("%d", n % 10);
       reverse(n/10); // Recursion
   }
}

void main()
{
   int n = 125;

      reverse(n);
}
