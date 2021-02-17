
#include <stdio.h>

float average(int,int);  // Function declaration or Prototype declaration

void main()
{
 int a = 10, b = 15;
 float avg;

   avg = average(a,b);
   printf("%f", avg);
}

// Function definition
float average(int a, int b)
{
  return (a + b) / 2.0;
}


