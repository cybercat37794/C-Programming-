#include<stdio.h>
int main(){
int sum ,i,j;

for(i=1;i<=3;i++){
for(j=1;j<=2;j++){
sum=i+j;
printf("i=%d j=%d sum=%d\n",i,j,sum);
}
}
return 0;
}
