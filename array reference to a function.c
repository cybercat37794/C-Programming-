#include<stdio.h>
void function(int,int[]);
int main(){
int a =20;
int arr[5]={11,22,33,44,55};
function(a,&arr[0]);
int i;
for(i=0;i<5;i++){
printf("value of arr [%d] is %d \n",i,arr[i]);

}
return 0;

}
void function(int a,int *arr_ptr){
arr_ptr[2]=a;
}
