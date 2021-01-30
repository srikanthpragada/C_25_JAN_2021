// Program to take price and, display net price with a discount of 20%
// Add tax of 5%

#include <stdio.h>

void main()
{
   int price, discount, discounted_price, tax, net_price;

      printf("Enter price :");
      scanf("%d",&price);

      discount = price * 20 / 100;
      discounted_price = price - discount;
      tax = discounted_price * 0.05;
      net_price = discounted_price + tax;

      printf("Price        %6d\n",price);
      printf("- Discount   %6d\n",discount);
      printf("             ------\n");
      printf("             %6d\n",discounted_price);
      printf("+ Tax        %6d\n",tax);
      printf("             ------\n");
      printf("Net price    %6d", net_price);
}
