//Generates a box with x and y dimensions

#include <stdio.h>

// function prototype for drawing the box
//pass x and y axis of box
void generate_numbers(int how_many_numbers);

int main()
{
       int how_many_numbers = 0;

       printf("Provide how many numbers to generate : ");
       scanf("%d", &how_many_numbers);
       generate_numbers(how_many_numbers);
       return 0;
}

void generate_numbers(int how_many_numbers)
{
       int n = 0;
       while (n < how_many_numbers)
       {
              printf(" %d \n", ++n);
       }
}