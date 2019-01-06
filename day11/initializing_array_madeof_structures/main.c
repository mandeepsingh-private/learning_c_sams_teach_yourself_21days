/* ####################################################
Demonstrates structures that contain other structures
in array
#######################################################*/

#include <inttypes.h>
#include <stdio.h>

//Define customer
struct customer {
	char firm[20];
	char contact[25];
};

//define sale for the customer
struct sale {
	struct customer buyer; //buyer is a customer
	char item[20];
	float amount;
};

//initialize the array data
//year 2018
struct sale sales_year_2018[100] = {
	//initialize record 1
	{
		{	"APPLE",
			"George Adams"
		},
		"Semiconductors",
		10000.00
	},
	//record 2
	{
		{	"SAMSUNG",
			"Mike Bodson"
		},
		"Semiconductors",
		50000.00
	}
};

//initialize the struct 2 data
//year 2019
struct sale sales_year_2019[100] = {
	//initialize record 1
	{
		{	"APPLE",
			"George Adams"
		},
		"Semiconductors",
		10.00
	},
	//record 2
	{
		{	"SAMSUNG",
			"Mike Bodson"
		},
		"Semiconductors",
		100.00
	}
};


int main() {
	printf("------------------------------------------------------\n");
	printf("year 2018 sales\n");
	printf("------------------------------------------------------\n");
	printf("Who was Customer? :%s\n", sales_year_2018[1].buyer.firm);
	printf("What did he buy? :%s\n", sales_year_2018[1].item);
	printf("How many? :%f\n", sales_year_2018[1].amount);

	printf("------------------------------------------------------\n");
	printf("year 2019 sales\n");
	printf("------------------------------------------------------\n");
	printf("Who was Customer? :%s\n", sales_year_2019[1].buyer.firm);
	printf("What did he buy? :%s\n", sales_year_2019[1].item);
	printf("How many? :%f\n", sales_year_2019[1].amount);
	return 0;
}