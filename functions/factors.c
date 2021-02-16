// function to print factors

void factors(int num)
{
 int i;

  for(i = 2; i <= num/2; i ++)
     if(num % i == 0)
        printf("%d ", i);
}

void main()
{

  printf("Factors of 125 :");
  factors(125);
  printf("\nFactors of 342 :");
  factors(342);
}
