/* ####################################################
Demonstrates structures that contain other structures
in aarray
#######################################################*/

#include <stdio.h>
#include <string.h>

//declare a struct with a char pointer
struct donor_data {
	char * fname;
	char * lname;
	float amount;
};

//simple char pointer
char * ptr = "hello World";

//We can only use ptr only if it points to a valid memory location
char str[10];
char *p = str;

//create valid memory location
char first_name[100];
char last_name[100];

char dynamic_string[] = "The string without a number";

struct donor_data donor =
{	"John",
	"Wilson",
	100.0
};

struct books {
	char *p1;
	char *p2;
} book_ptrs[2];


int main() {
	book_ptrs[0].p1 = "Teach Yourself C In 21 Days";
	book_ptrs[0].p2 = "By SAMS Publishing";

	book_ptrs[1].p1  = "the C programming Language";
	book_ptrs[1].p2 = "By SAMS Publishing";
	//point to valida memoery location
	donor.fname = first_name;
	donor.lname = last_name;

	//ptr = "Yellow World";
	//printf("%s\n", ptr);
	//printf("Input donor first name \"space\" last name :");
	//scanf("%s %s", donor.fname, donor.lname);

	strcpy(p, "Mandeep");
	strcpy(donor.lname, "Mandeep");
	strcpy(donor.fname, "SINGH");
	donor.amount = 100;
	//printf("Input donor amount :");
	//scanf("%f", &donor.amount);



	printf("Donor Name:%s %s, Donation Amount: %f\n",
	       donor.fname,
	       donor.lname,
	       donor.amount);

	for (int i = 0; i < 2; i++)
	{
		printf("Books %s\n", book_ptrs[i].p1);
	}

	printf("Dynamic string %s\n", dynamic_string);

	return 0;
}