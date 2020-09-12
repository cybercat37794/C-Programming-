#include<stdio.h>
void main(){
float salary[5]={65654.2133,46546.64565,84954.546,854655.56645,846533.6315};
int i;
for(int i=0;i<5;i++)
{
    printf("salary[%d]:%.2lf\n",i,salary[i]);
}
return 0;
}
