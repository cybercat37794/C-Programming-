#include<stdio.h>
void main(){
int i=10;
do{
printf("Hello%d\n",i);
i=i-2;
if (i==4){break;}
}while(i>0);
}
