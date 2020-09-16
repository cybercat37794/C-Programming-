#include <stdio.h>
void main(){
int size = 5;
float marks[size];

/*Inserting marks into marks array */
int i;
for(i = 0; i < size; i++){
printf("Enter a mark: ");
scanf("%f", &marks[i]);
}

}
