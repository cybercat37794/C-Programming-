#include<stdio.h>
int main(){
int x=10;
int *i=&x;

printf("%u \n",&x);
printf("%u \n",i);
printf("%u \n",*i);
return 0;
}
