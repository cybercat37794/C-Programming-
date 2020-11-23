#include<stdio.h>
int main(){
int i;
char name[20];
for(i=0;i=10;i++){
printf("Enter name:");
scanf("%s", &name);
printf("you entered:%s\n",name);
if (name==0){break;}
}
return 0;
}
