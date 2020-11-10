#include<stdio.h>
int main(){
char x,y;
printf("Input an alphabet in capital letter:");
scanf("%c",&x);//input d//

y=x+32;

//difference between the ASCII value of capital and small  alphabet is 32//
printf("%c in small letter is %c",x,y);

}
