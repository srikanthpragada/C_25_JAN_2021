// Program to calculate net salary

#include <stdio.h>

void main()
{
   float salary, hra, da, pf, net_salary;

      printf("Enter salary : ");
      scanf("%f",&salary);

      hra = salary * 0.30;
      da = salary * 0.20;
      pf = salary * 0.02;

      net_salary = salary + hra + da - pf;
      printf("Net Salary = %.0f", net_salary);

}
