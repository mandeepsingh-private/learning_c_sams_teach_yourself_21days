/*Write an if statement that assigns the value of x to the variable y only if x is
between 1 and 20. Leave y unchanged if x is not in that range. 
Usng conditional operator*/

#include <stdio.h>

int main()
{
       int x = 0;
       int y = 0;
       printf("input number x: ");
       scanf("%d", &x);
       printf("input number y: ");
       scanf("%d", &y);
       //using conditional operator or tenary operator
       //exp1 ? exp2 : exp3;
       (x >= 2 && x <= 20) ? y = x : y;
       printf("Value if Y is: %d \n", y);
       return 0;
}