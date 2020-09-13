#include<stdio.h>
void main(void){
int num = 0;
do{
printf("Enter Number [1-10]: ");
scanf("%d", &num);
printf("Your Number = %d \n",num);
num--;
}while (num <= 9);

}


