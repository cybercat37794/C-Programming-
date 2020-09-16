#include <stdio.h>
void main(){
int size = 5;
float marks[size];

/*Inserting marks into marks array */
int i;
for(i = 0; i < size; i++){
printf("Enter a marks: ");
scanf("%f", &marks[i]);
}

/*Let’s print all marks in the marks array */

printf("\nPrinting all marks:");

int j;
for(j = 0; j < size; j++){
printf("\n%.1f ", marks[j]);
}

}
