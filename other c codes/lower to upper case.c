#include<stdio.h>
int main(){
char x,y;
printf("Input an alphabet in small letter:");
scanf("%c",&x);//input d//

y=x-32;

//difference between the ASCII value of small and capital alphabet is 32//
printf("%c in capital letter is %c",x,y);

}
