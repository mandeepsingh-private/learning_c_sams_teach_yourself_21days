/* ####################################################
Display address of successive array elements
#######################################################*/
#include <inttypes.h>
#include <stdio.h>
# define SIZE 10

int int_array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;

int *p_int_array = NULL;

int main()
{
	p_int_array = &int_array[0];

	printf("Array elements \n using pointer \n arithmetic \n(by pointing to array) are  \
	       Array elements \n \t \t \t \tusing original array method are \t \
	       Array elements address are\n");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("\t%d",
		       *p_int_array++);
		printf("\t\t\t\t\t%d", int_array[i]);
		printf("\t\t\t\t\t\t\t%ld \n", (uintptr_t) &int_array[i]);
	}

	return 0;
}