/* ####################################################
find the biggest number using array as a parameter to function
#######################################################*/
#include <inttypes.h>
#include <stdio.h>
//define size of array
# define SIZE 3

//declare the two arrays
int int_array1[SIZE] = {1, 2 , 10};
int int_array2[SIZE] = {3, 4, 10};

char language = 'c';
char * p_name = &language;

int cost = 100;
int * p_cost = &cost;

//declare the function to add two arrays
int add_two_arrays(int array1[], int size_array, int int_array2[]);
//declare the function to add elements of both arrays
int add_all_elements_two_arrays(int array1[], int size_array, int int_array2[]);

int main() {
	//CHANGE COST to 200 using indirect access
	*p_cost = 200;
	// Change cost to 300 using dirct access
	cost = 300;
	printf("This program is written in %c and costed : $%d\n", *p_name, *p_cost);

	// change the 3rd value of each array
	int_array1[2] = 100;
	int_array2[2] = 100;
	//call the funtion add two arrays
	add_two_arrays(int_array1, SIZE, int_array2);

	// call the function to add all elements of both arrays
	printf("Total sum of two arrays is %d \n",
	       add_all_elements_two_arrays(int_array1, SIZE, int_array2));

	return 0;
}

int add_two_arrays(int array1[], int size_array, int array2[])
{
	int added_array[SIZE];
	// loop and add each element of array
	for (int i = 0; i < size_array; i++)
	{
		added_array[i] = array1[i] + array2[i];
		printf("Added new array is %d \n", added_array[i]);
	}


	return 0;
}

int add_all_elements_two_arrays(int array1[], int size_array, int array2[])
{
	int sum = 0;
	// loop and add all elemnts of arrays into sum variable
	for (int i = 0; i < size_array; i++)
	{
		sum = sum + array1[i] + array2[i];

	}

	return sum;
}