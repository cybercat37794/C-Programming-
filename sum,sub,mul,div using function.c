#include<stdio.h>
void main(void)
{
    int a=20;
    int b=15;
     sum (a,b);//argument
     sub(a,b);
     mul(a,b);
     divides(a,b);
}
//summation
    void sum(int x,int y){   //parameter
    int res =x+y;
    printf("sum result : %d\n",res);
    }
    //subtraction
void sub(int x,int y){
    int res =x-y;
    printf("subtraction result : %d\n",res);
    }
    //multiplication//
void mul(int x,int y){
    int res =x*y;
    printf("multiplication result : %d\n",res);
    }
    //divides//
void divides(int x,int y){
    int res =x%y;
    printf("divides result : %d\n",res);
    }



