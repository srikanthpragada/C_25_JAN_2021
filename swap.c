// Program to interchange numbers

#include<stdio.h>

void main()
{
  int a,b,temp;

    printf("Enter two number :");
    scanf("%d%d",&a,&b);

    // interchange or swap
    temp=a;
    a=b;
    b=temp;

    printf("a=%d b=%d",a,b);
}
