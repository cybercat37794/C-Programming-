#include<stdio.h>
// Demonstration of nested loops //
void main(){
int n,i,j ;
n = 5;

for ( i = 1 ; i <= n ; i++ ){ // outer loop //
for( j =1 ; j <= i ; j++ ){ // inner loop //
printf("*");
}
printf("\n");
}

}
