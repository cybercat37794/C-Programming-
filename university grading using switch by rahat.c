#include<stdio.h>
//Program to find exam grade using switch

int main()
{
   int n,i;
   printf("Enter numerical mark:\n");
   scanf("%d",&n);

   if(n>=90&&n<=100)
   {
       i=1;
   }
   else if(n>=85&&n<90)
   {
       i=2;
   }
   else if(n>=80&&n<85)
   {
       i=3;
   }
   else if(n>=75&&n<80)
   {
       i=4;
   }
   else if(n>=70&&n<75)
   {
       i=5;
   }
   else if(n>=65&&n<70)
   {
       i=6;
   }
   else if(n>=60&&n<65)
   {
       i=7;
   }
   else if(n>=50&&n<60)
   {
       i=8;
   }
   else if(n>=0&&n<50)
   {
       i=9;
   }
   else
   {
       i=10;
   }
   switch(i)
   {
       case(1): printf("Your garde is: A+\n");
       break;

       case(2): printf("Your garde is: A\n");
       break;

       case(3): printf("Your garde is: B+\n");
       break;

       case(4): printf("Your garde is: B\n");
       break;

       case(5): printf("Your garde is: C+\n");
       break;

       case(6): printf("Your garde is: C\n");
       break;

       case(7): printf("Your garde is: D+\n");
       break;

       case(8): printf("Your garde is: D\n");
       break;

       case(9): printf("Your garde is: F\n");
       break;

       case(10): printf("invalid number\n");
       break;
   }
    return 0;
}
