#include<stdio.h>
//Program to find exam grade using switch
int main()
{
    int n,i;
printf("Enter numerical mark:\n");
scanf("%d",&n);

switch(i)
{ case(1):
   printf("Your garde is: A+\n");
   break;
   case(2):
   printf("Your garde is: A\n");
   break;
   case(3):
   printf("Your garde is: B+\n");
   break;
   case(4):
   printf("Your garde is: B\n");
   break;
   case(5): printf("Your garde is: C+\n");
   break;
   case(6):
   printf("Your garde is: C\n");
   break;
   case(7):
   printf("Your garde is: D+\n");
   break;
   case(8):
   printf("Your garde is: D\n");
   break;
   case(9):
   printf("Your garde is: F\n");
   break;
   default:
printf("invalid number");
    }
    return 0;
    }
