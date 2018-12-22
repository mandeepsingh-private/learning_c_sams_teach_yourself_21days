//Generates a box with x and y dimensions

#include <stdio.h>

// declare functions

void generate_numbers_countby3(int how_many_numbers);


//Main function
int main()
{
       int how_many_numbers = 0;

       printf("Provide how many numbers to generate <1000 : ");
       scanf("%d", &how_many_numbers);
       generate_numbers_countby3(how_many_numbers);
       return 0;
}


//generate numbers from 0 to user input by increments of 5
void generate_numbers_countby3(int how_many_numbers)
{
	int i=0;
	while(i<=how_many_numbers)
	{
	      printf(" %d \n", i);
	      i=i+3;
	}
}

