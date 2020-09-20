#include<stdio.h>
void main(void){

int x =10;
int *p;

p=&x;

printf("x=%d\n",x);
printf("address of x=%d\n",x);
printf("p=%d\n",p);
printf("address of pointer p=%u\n",&p);
printf("value pointed by p=%u\n",*p);

}
