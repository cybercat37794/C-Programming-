#include <stdio.h>
#include <conio.h>

int main(){
   int marks;

   printf("Enter your marks between 0 to 100\n");
   scanf("%d", &marks);

   switch(marks/1)
   {
       case 9<16 :
           if(90<marks<100)
            printf("Your Grade : A+\n" );
           break;
       case 8 :
           if(85<marks<89)
           printf("Your Grade : A\n" );
           break;
       case 7 :
            if(80<marks<84)
            printf("Your Grade : B+\n" );
       case 6 :
           if(75<marks<79)

           printf("Your Grade : B\n" );
           break;
       case 5 :
            if(70<marks<74)

           printf("Your Grade : C+\n" );
           break;
       case 4 :
            if(65<marks<69)
            printf("Your Grade : C\n" );
       case 3 :
           if(60<marks<64)
            printf("Your Grade : D+\n" );

           break;
        case 2 :
           if(50<marks<59)
            printf("Your Grade : D\n" );

           break;
       case 1 <34:
           if(50<marks<54)
            printf("Your Grade : D+\n" );

           break;


       default :
           /* Marks less than 40 */
           printf("You failed\n" );
   }

   getch();
   return 0;
}
