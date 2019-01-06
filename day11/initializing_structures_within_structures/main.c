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

//initialize the data
struct sale mysale = {
	{	"APPLE",
		"George Adams"
	},
	"Semiconductors",
	10000.00
};



int main() {

	printf("Who was Customer? :%s\n", mysale.buyer.firm);
	printf("What did he buy? :%s\n", mysale.item);
	printf("How many? :%f\n", mysale.amount);
	return 0;
}