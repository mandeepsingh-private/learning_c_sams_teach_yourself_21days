/* Purpose: Pick a random number between 0 and 100 
and let user try to guess it*/

#include <stdio.h>

int p = 0;
int x = 0;
// function prototype

int power(int a);

int main()
{
       printf("enter a number to calculate the power of 3 between 1 and 20: ");
       scanf("%d", &x);
       //check number is between 1 and 20
       if (x<1 | x> 20)
       {
              printf("Incorrect input\n");
       }
       else
       {
              p = power(x);
              printf("%d Power of 3 is %d\n", x, p);
       }
       return 0;
}

int power(int a)
{
       //return factorial 1 for input =1
       if (a == 1)
       {
              return 3;
       }
       else
       {
              a = 3 * power(a - 1);
              return a;
       }
}