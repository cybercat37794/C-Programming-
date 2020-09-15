#include<stdio.h>
int find_larger(int num1, int num2);
void main(){
//calling find larger function//
int larger = find_larger(150,350);
printf("larger number is:%d \n",larger);
}
int find_larger(int num1,int num2){
int result;
if (num1 >num2){
result = num1;
}
else{
    result=num2;

}
return result;
}

