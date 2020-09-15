#include<stdio.h>
int square(int x);
int main()
{
    int number, square_val;
    printf("\nEnter a number for finding square:");
    scanf("%d, &number");
//function call//
    square_val=square(number);
    printf("\nSquare of %d is %d",number,square_val);
    return 0;
}
