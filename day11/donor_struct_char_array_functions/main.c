/* ####################################################
Demonstrates structures that contain other structures
in array
#######################################################*/

#include <inttypes.h>
#include <stdio.h>
#define SIZE 4

struct donor_data {
	char fname[20];
	char lname[20];
	float amount;
};

struct donor_data donor[5] = {
	//put one record
	{	"John",
		"Wilson",
		100.0
	}
};
//define a print function which takes in a array

void print_records(struct donor_data donor[SIZE], int size);

int main()
{
	// starting from 1 as record o is already initialized
	for (int i = 1; i < SIZE; i++)
	{
		printf("Input donor %d first name \"space\" last name :", i + 1);
		scanf("%s %s", donor[i].fname, donor[i].lname);
		printf("Input donor amount :");
		scanf("%f", &donor[i].amount);

	}
	//call the print function
	print_records(donor, SIZE);

	return 0;
}

void print_records(struct donor_data donor[SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Donor Name:%s %s, Donation Amount: %f\n",
		       donor[i].fname,
		       donor[i].lname,
		       donor[i].amount);

	}
}