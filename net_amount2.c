// Program to calculate net price based on qty,price, discount and tax

#include<stdio.h>
void main()
{
  float quantity,price,amount,discount, net_amount, discounted_amount, tax;

  printf("Enter price and quantity :");
  scanf("%f%f", &price,&quantity);

  amount = price * quantity;

  if (quantity > 2)
     discount = amount * 0.30;
  else
     discount = amount * 0.20;

  discounted_amount = amount  - discount;
  tax = discounted_amount * 0.05;
  net_amount = discounted_amount + tax;

  printf("Amount        %8.2f\n", amount);
  printf("- Discount    %8.2f\n", discount);
  printf("              --------\n");
  printf("              %8.2f\n", discounted_amount);
  printf("+ Tax         %8.2f\n", tax);
  printf("              --------\n");
  printf("Net Amount    %8.2f",net_amount);

}
