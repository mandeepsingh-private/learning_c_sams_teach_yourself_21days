//count number by 3

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


//generate numbers from 0 to user input by increments of 3
void generate_numbers_countby3(int how_many_numbers)
{
	int i = 0;
	do
	{
		printf(" %d \n", i);
		i = i + 3;
	} while (i <= how_many_numbers);
}

