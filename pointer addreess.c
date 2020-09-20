#include<stdio.h>
void main()
{
    int x=10;
    int *i=&x;

    printf("address of x: %u \n",&x);
    printf("value of i:%u \n",i);
    printf("value of the pointer i is pointing to :%u \n",*i);
    printf("address of pointer i:%u\n",&i);

}
