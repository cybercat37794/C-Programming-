int main(void)
{
    int num;

    printf("Enter your numerical grade: ");

    scanf("%d",&num);

    printf(" You entered %d Marks ", num);

    if(num >100)

        printf ("\n no grade available");

   else if(num >=90){

        printf("\n You grade is A+ ");

    }

    else if ( num >=85){

        printf("\n Your grade is A ");

    }

    else if ( num >=80)

        {

        printf(" \nYour grade is B+ ");

    }

    else if ( num >=75)

        {

        printf(" \nYour grade is B ");

    }

    else if ( num >=70)

    {

        printf("n\ Your grade is C+");

    }


    else if ( num >=65)

             {

        printf(" \nYour grade is C ");

    }

    else if ( num >=60)

    {

        printf(" \nYour grade is D+ ");

    }

    else if ( num >=50)

    {

        printf(" \nYour grade is D ");

    }

  else if ( num < 50){

        printf(" \n You Failed in this exam ");

        printf(" \n Better Luck Next Time ");

    }

    return 0;

}
