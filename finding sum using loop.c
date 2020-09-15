 #include <stdio.h>
 void main()
 {
 double number, sum = 0;

 do
    {
 printf("Enter number (enter 0 to exit): ");
 scanf("%1f", &number);
 // %1f for reading double //
 sum += number;
 }
 while(number != 0.0) ;

 printf("Sum = %.21f",sum);

}
