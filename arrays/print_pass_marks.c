// Display marks of students who passed exam

#include <stdio.h>

void main()
{
   int marks [10];
   int i;

      srand(time(0)); // Initialize random seed

      for(i = 0; i < 10; i ++)
         marks[i] = rand() % 100;


      for(i = 0; i < 10; i ++)
      {
         if(marks[i] >= 50)
            printf("%d ", marks[i]);
      }
}
