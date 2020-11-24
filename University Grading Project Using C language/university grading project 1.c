#include<stdio.h>
int main()
{
    int number;
    int id;
    int a;
    char b;

    for (a=1; a<100; a++)
    {

        printf("Enter your marks: ");
        scanf("%d",&number);
        printf("You entered %d Marks\n", number);

        printf("Enter your Id: ");
        scanf("%d",&id);
        printf("Your Id is:%d ",id);



        if(number >100)
        {

            printf ("\nInvalid Number");
        }

        else if(number >=90&&number<=100)
        {

            printf("\nYou grade is A+ ");

            printf("\nYour grade point is 4.00\n");

        }

        else if ( number >=85&&number<=89)
        {

            printf("\nYour grade is A ");

            printf("\nYour grade point is 3.75\n");
        }

        else if ( number >=80&&number<=84)

        {

            printf("\nYour grade is B+ ");

            printf("\nYour grade point is 3.50\n");
        }

        else if ( number >=75&&number<=79)

        {

            printf("\nYour grade is B ");

            printf("\nYour grade point is 3.25\n");
        }

        else if ( number >=70&&number <=74)

        {

            printf("\nYour grade is C+");

            printf("\nYour grade point is 3.00\n");
        }


        else if ( number >=65&&number<= 69)

        {

            printf("\nYour grade is C ");

            printf("\nYour grade point is 2.75\n");
        }

        else if ( number >=60&&number<= 64)

        {

            printf("\nYour grade is D+ ");

            printf("\nYour grade point is 2.50\n");
        }

        else if ( number >=50&&number <=59)

        {

            printf("\nYour grade is D ");

            printf("\nYour grade point is 2.25\n");
        }

        else if ( number < 50)
        {

            printf("\nYou Failed in this exam ");

            printf("\nBetter Luck Next Time ");

        }

        if(b == 'b')
        {
            break;
        }

    }



    return 0;

}
