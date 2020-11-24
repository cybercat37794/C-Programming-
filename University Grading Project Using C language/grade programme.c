#include <stdio.h>

int main()
{
    int num,Id,course;
    int a;
    for (a=1; a<100; a++)
    {

        printf("\nMarks: ");
        scanf("%d", & num);

        printf("\nCourse id: ");
        scanf("%d",&course);


        printf("\nStudent Id:");
        scanf("%d",& Id);
        printf("your Id is:%d ",Id);


        printf("your marks:%d ", num);

        if(num<50)
        {
            printf("your grade is :F ");
            printf("you grade point is=0.00");
        }

        else if (num>=50 && num<=59)
        {
            printf("your grade is :D ");
            printf("you grade point is=2.25");
        }

        else if (num>= 60 && num<= 64)
        {
            printf("your Grade is :D+ ");
            printf("you grade point is=2.50");
        }
        else if (num>=65  && num<=69)
        {
            printf("your grade is :c ");
            printf("you grade point is=2.75");
        }

        else if (num>=70  && num<=74)
        {
            printf("your grade is :c+ ");
            printf("you grade point is=3.00");
        }

        else if (num>= 75 && num<=79)
        {
            printf("your grade is :B ");
            printf("you grade point is=3.25");
        }

        else if (num>= 80 && num<=84)
        {
            printf("your grade is :B+ ");
            printf("you grade point is=3.50");
        }

        else if (num>= 85 && num<=89)
        {
            printf("your grade is :A ");
            printf("you grade point is=3.75");
        }

        else if (num>= 90 && num<=100)
        {
            printf("your grade is :A+ ");
            printf("you grade point is=4.00");
        }


        else
        {
            printf("Invalid Input");
        }
    }
    return 0;


}

