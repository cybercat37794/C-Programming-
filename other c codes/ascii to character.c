#include<stdio.h>
void main(void){
int x;
printf("Enter a ASCII value between(65-90)and(97-122):");
scanf("%d",&x);
//using type casting to convert char to int//

printf("ASCII value of %d is %c",x,(char)x);

}
