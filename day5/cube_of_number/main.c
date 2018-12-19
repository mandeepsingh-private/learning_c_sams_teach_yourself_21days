/* Purpose: Pick a random number between 0 and 100 
and let user try to guess it*/

#include <stdio.h>

// function prototype
int cube(int number);

int main()
{
       int number = 0;
       int answer = 0;
       printf("Pick a number ? ");
       scanf("%d", &number);
       //calculate the cube
       answer = cube(number);
       printf("Cube of number is : %d\n", answer);
       return 0;
}
//define the function for calculating the cuve
int cube(int number)
{
       int cube = 0;
       cube = number * number * number;
       return cube;
}