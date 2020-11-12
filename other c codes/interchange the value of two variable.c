#include<stdio.h>
void main(void){
//assigning the value at declaration//
int x=5, y=10,t;
printf("before swap,x=%d y=%d\n",x,y);
t=x;
x=y;
y=t;
printf("After swap, x=%d,y=%d\n",x,y);

}
