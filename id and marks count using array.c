#include<stdio.h>
void main(void){
int i,j;
int id[60];
float marks[60];
int count=0;

//taking input
for(i=0;i<60;i++){
printf("Enter id:");
scanf("%d", &id[i]);
count=i;
if (id[i]==0){break;}

printf("Enter marks:");
scanf("%f",&marks[i]);
}

printf("count%d\n",count);
//printing the array

for(i=0;i<count;i++){
printf("ID:%d, Marks: %.1f\n",id[i],marks[i]);
}
}
