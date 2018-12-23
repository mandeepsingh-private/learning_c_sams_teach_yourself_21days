/* ####################################################
Demo Ten elements initialize to 1
#######################################################*/

#include <stdio.h>
#define SIZE 10

int main() {
	int array[SIZE];
	for (int i = 0; i < SIZE; ++i)
	{
		array[i] = 1;
		printf("Intialized array element %d is : %d \n", i, array[i]);
	}

	return 0;
}