// Manage student marks

#include <stdio.h>
#define  FILENAME   "students.dat"

struct student
{
   char name[30];
   int marks;
};

void add_student()
{
     FILE * fp;
     struct student s;

         fp = fopen(FILENAME, "ab");
         if(fp == NULL)
         {
             printf("Sorry! Could not open file. Quitting...");
             exit(1);
         }
         // take data about student
         fflush(stdin); // clear keyboard buffer
         printf("Enter name   :");
         gets(s.name);
         printf("Enter marks  :");
         scanf("%d",&s.marks);

         // write data to file
         fwrite(&s, sizeof(s), 1, fp);
         fclose(fp);
}

void update_student()
{
     FILE * fp;
     struct student s;
     int rollno,count,offset;

         fp = fopen(FILENAME, "r+b");  // read-write mode
         if(fp == NULL)
         {
             printf("Sorry! Could not open file. Quitting...");
             exit(1);
         }

         // take data about student
         printf("Enter Rollno  :");
         scanf("%d",&rollno);

         // Read record of the given rollno
         offset = (rollno - 1) * sizeof(s);
         count = fseek(fp, offset, SEEK_SET);  // goto required student

         if(count != 0) {
             printf("Sorry! Invalid Roll number!\n");
             return;
         }

         count = fread(&s,sizeof(s),1,fp);
         if(count == 0) {
               printf("Sorry!  Invalid Roll Number!\n");
               return;
         }
         // Take new marks
         printf("Enter marks  :");
         scanf("%d",&s.marks);

         // Move to required record
         fseek(fp, offset, SEEK_SET);

         // write data to file
         fwrite(&s, sizeof(s), 1, fp);
         fclose(fp);
}

void  list_students()
{
     FILE * fp;
     struct student s;
     int count;

         fp = fopen(FILENAME, "rb");
         if(fp == NULL)
         {
             printf("Sorry! Could not open file. Quitting...");
             exit(1);
         }

         printf("Student Name                   Marks\n");
         printf("=========================================\n");

         while(1)
         {
             count = fread(&s,sizeof(s),1,fp);
             if (count == 0)
                break;

            printf("%-30s  %3d\n", s.name,s.marks);
         }
         printf("=========================================\n");

         fclose(fp);
}

void  get_student()
{
     FILE * fp;
     struct student s;
     int count,rollno, offset;

         fp = fopen(FILENAME, "rb");
         if(fp == NULL)
         {
             printf("Sorry! Could not open file. Quitting...");
             exit(1);
         }
         printf("Enter rollno : ");
         scanf("%d",&rollno);

         offset = (rollno - 1) * sizeof(s);
         count = fseek(fp, offset, SEEK_SET);  // goto required student
         if(count != 0)
             printf("Sorry! Invalid Roll number!\n");
        else
        {
            count = fread(&s,sizeof(s),1,fp);
            if(count == 0)
                printf("Sorry!  Invalid Roll Number!\n");
            else
            {
              printf("Student Details\n");
              printf("==========================\n");
              printf("Name :   %s\n", s.name);
              printf("Marks :   %3d\n",s.marks);
              printf("==========================\n");
           }
      }
      fclose(fp);
}

void main()
{
int choice;

    while(1)
    {
        printf("**** Menu ****\n");
        printf("1. Add Student\n");
        printf("2. List Students\n");
        printf("3. Get Student\n");
        printf("4. Update Student\n");
        printf("5. Exit\n");
        printf("Enter Choice [1-5] :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : add_student();
                          break;
            case 2 : list_students();
                          break;
            case 3 : get_student();
                          break;
            case 4 : update_student();
                          break;
            case 5 : printf("\nThank You!\n");
                          exit(0); // stop program
        } // switch

    } // while()

} // main()
