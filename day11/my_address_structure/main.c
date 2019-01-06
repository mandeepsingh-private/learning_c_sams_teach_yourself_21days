

#include <inttypes.h>
#include <stdio.h>

/*--------------------------------
Method 1 to initialize
Define the struct
then initialize separately
----------------------------------*/
struct data {
	int employee_number;
	char name[20];
	char *address_1;
	char *address_2;
	char *city;
	char *state;
	char *zip;
	float salary;
	float bonus;
};

struct data employee = {
	23,
	"Matt Dimon",
	" 777",
	"west point street",
	"Berea",
	"Ohio",
	"071110",
	1000.0,
	50.00,
};


int main() {

	printf("Employee Number is : %d\n", employee.employee_number);
	printf("Employee Name is : %s\n", employee.name);
	printf("Employee Address is : %s %s, %s, %s, %s\n",
	       employee.address_1, employee.address_2,
	       employee.city, employee.state,
	       employee.zip);
	printf("Salary : %f\n", employee.salary);
	printf("Bonus : %f\n", employee.bonus);


	return 0;
}