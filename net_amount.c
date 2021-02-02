// Program to calculate net price based on qty,price, discount and tax

#include<stdio.h>
void main()
{
  float quantity,price,amount,net_amount, discounted_amount, tax;

  printf("Enter price and quantity :");
  scanf("%f%f", &price,&quantity);

  amount = price * quantity;
  discounted_amount = amount * 0.70;
  tax = discounted_amount * 0.05;
  net_amount = discounted_amount + tax;
  printf("Net Amount = %.2f",net_amount);

}
