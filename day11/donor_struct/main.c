/* ####################################################
Demonstrates structures that contain other structures
in aarray
#######################################################*/

#include <inttypes.h>
#include <stdio.h>


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

int main() {


	for (int i = 1; i < 3; i++)
	{
		printf("Input donor %d first name \"space\" last name :", i + 1);
		scanf("%s %s", donor[i].fname, donor[i].lname);
		printf("Input donor amount :");
		scanf("%f", &donor[i].amount);

	}
	for (int i = 0; i < 5; i++)
	{
		printf("Donor Name:%s %s, Donation Amount: %f\n",
		       donor[i].fname,
		       donor[i].lname,
		       donor[i].amount);

	}

	return 0;
}