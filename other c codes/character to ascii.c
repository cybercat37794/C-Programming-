#include<stdio.h>
void main(void){
char x;
printf("Enter a character:");
scanf("%c",&x);
//using type casting to convert char to int//

printf("ASCII value of %c is %d",x,(int)x);

}
