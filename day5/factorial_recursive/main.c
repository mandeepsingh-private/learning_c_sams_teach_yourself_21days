/* Purpose: Pick a random number between 0 and 100 
and let user try to guess it*/

#include <stdio.h>

int f = 0;
int x = 0;
// function prototype

int factorial(int a);

int main()
{
       printf("enter a number for factorial greate than 1 and less than 20 : ");
       scanf("%d", &x);
       //check number is between 1 and 20
       if (x<1 | x> 20)
       {
              printf("Incorrect input\n");
       }
       else
       {
              f = factorial(x);
              printf("Factorial is %d\n", f);
       }
       return 0;
}

int factorial(int a)
{
       //return factorial 1 for input =1
       if (a == 1)
       {
              return 1;
       }
       else
       {
              a = a * factorial(a - 1);
              return a;
       }
}