/* ####################################################
find the biggest number using array as a parameter to function
#######################################################*/
#include <inttypes.h>
#include <stdio.h>
# define SIZE 10


int int_array[SIZE];

int find_biggest(int array[], int array_size);


int main() {

	for (int i = 0; i < SIZE; ++i)
	{
		printf("Enter number %d : ", i);
		scanf("%d", &int_array[i]);

	}
	//call the funtion to find the biggest
	printf("Biggest number you entered wad %d\n", find_biggest(int_array, SIZE));

	return 0;
}

int find_biggest(int array[], int array_size)
{
	int biggest = -1;
	for (int i = 0; i < array_size; i++)
	{
		if ( array[i] > biggest)
		{
			biggest = array[i];
		}
	}
	return biggest;
}