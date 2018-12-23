/* Demonstration of frequently used escape sequences */

#include <stdio.h>


int main( void )
{
       float num1 = 0.0;
       float num2 = 0.0;
       float answer = 0;
       printf("Enter num 1 in floating format e.g. 1.23 : \n");
       scanf("%f", &num1);
       printf("Enter num 2 in floating format e.g. 1.23 : \n");
       scanf("%f", &num2);
       answer = num1 * num2;
       printf("product of 2 numbers is %.3f \n", answer);



       return 0;

}
