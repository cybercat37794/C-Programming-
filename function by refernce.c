#include<stdio.h>
void swap(int *a,  int *b);

int main(){
int a=10, b=20;
printf("value before swap, a=%d, b=%d,\n",a,b);
swap(&a,&b);
printf("value after swap ,a=%d,b=%d \n",a,b);


}
void swap(int *a, int*b){
int tmp;
tmp=*a;
*a=*b;
*b=tmp;

}

