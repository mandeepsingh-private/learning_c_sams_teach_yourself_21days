/* ####################################################
Demonstrates structures that contain other structures
in array
#######################################################*/

#include <inttypes.h>
#include <stdio.h>

/*--------------------------------
Method 1 to initialize
Define the struct
then initialize separately
----------------------------------*/
struct donor_data {
	char *p_fname;
	char *p_lname;
	float amount;
};

struct donor_data donor = {"Mandeep",
	"Singh",
	100.00
};

/*-------------------------------
 Method 2 to initialize
 Define the struct and
 initialize at same time
 -------------------------------*/
struct sale {
	char customer[20];
	char item[20];
	float amount;
} mysale = {

	"Acme Industries",
	"Left-handed widget",

	1000.00

};


int main() {

	printf("First Name : %s\n", donor.p_fname);
	printf("Last Name :%s\n", donor.p_lname);
	printf("Donation amount : %f\n", donor.amount);
	printf("customer :%s\n", mysale.customer);
	return 0;
}