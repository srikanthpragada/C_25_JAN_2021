int isprime(int num)
{
  int i;

     for(i = 2; i <= num/2 ; i ++)
     {
        if (num % i == 0)
           return 0;   // false
     }
     return 1; // true
}

int square(int num)
{
   return  num * num;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void main()
{
  int result, n;

     result = square(5);
     printf("%d\n", result);

     for(n = 1; n < 100; n += 2)
     {
         if (isprime(n))
             printf("%d ", n);

     }





}
