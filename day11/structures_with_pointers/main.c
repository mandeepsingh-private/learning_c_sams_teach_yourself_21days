/* ####################################################
Demonstrates structures that contain other structures
in aarray
#######################################################*/

#include <inttypes.h>
#include <stdio.h>


struct donor_data {
	char *p_fname;
	char *p_lname;
	float *amount;
} donor;

float donation = 100.0;

int main() {
	donor.p_fname = "Mandeep";
	donor.p_lname = "Singh";
	donor.amount = &donation;

	printf("First Name : %s\n", donor.p_fname);
	printf("Last Name :%s\n", donor.p_lname);
	printf("Donation amount : %f\n", *donor.amount);

	//change donor first name
	donor.p_fname = "Raunak";

	printf("After str copy ####################\n");

	printf("First Name : %s\n", donor.p_fname);
	printf("Last Name :%s\n", donor.p_lname);
	printf("Donation amount : %f\n", *donor.amount);
	return 0;
}