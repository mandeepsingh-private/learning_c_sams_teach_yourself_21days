

#include <inttypes.h>
#include <stdio.h>

/*--------------------------------
Method 1 to initialize
Define the struct
then initialize separately
----------------------------------*/
struct data {
	int employee_number;
	float salary;
	float bonus;
};

struct data employee_info = {
	23,
	1000.0,
	50.00,
};

struct data * p_employee_info;

int main() {

	printf("Employee Number is : %d\n", employee_info.employee_number);
	printf("Salary : %f\n", employee_info.salary);
	printf("Bonus : %f\n", employee_info.bonus);

	//change employee id
	employee_info.employee_number = 100;
	printf("After changing employee id -------\n");
	printf("Employee Number is : %d\n", employee_info.employee_number);
	printf("Salary : %f\n", employee_info.salary);
	printf("Bonus : %f\n", employee_info.bonus);
	p_employee_info = &employee_info;
	printf("Pointer p_employee_info -------\n");

	// chnage salary for employee
	p_employee_info->salary = 5.5;
	printf("Employee Number is : %d\n", employee_info.employee_number);
	printf("Salary : %f\n", employee_info.salary);
	printf("Bonus : %f\n", employee_info.bonus);
	return 0;
}