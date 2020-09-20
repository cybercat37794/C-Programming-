#include<stdio.h>
void main(){
int variable=100;
int *ptr;
int **pptr;
int ***ppptr;

ptr = &variable;//ptr means pointer//
pptr =&ptr;//pptr means pointer pointer//
ppptr=&pptr;//ppptr means pointer pointer pointer "LOL"//
//take the value using pptr*/
printf("variable=%d\n", variable);
printf("ptr=%d\n", *ptr);
printf("pptr=%d\n", **pptr);
printf("ppptr=%d\n", ***ppptr);
}
