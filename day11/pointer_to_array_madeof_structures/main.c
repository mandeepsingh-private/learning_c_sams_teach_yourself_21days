/* ####################################################
Demonstrates structures that contain other structures
in array
#######################################################*/

#include <inttypes.h>
#include <stdio.h>
#define size 4
//Define part
struct part {
	int number;
	char name[20];
	int price ;
};

struct part* p_part;

//create a array of car parts
struct part car[size] = {
	{
		111,
		"gears",
		100
	},
	{
		112,
		"Steering wheel",
		200
	},
	{
		113,
		"headlights",
		50
	},
	{
		114,
		"tyres",
		300
	}
};

int main() {
	p_part = &car[0];
	// method 2 to print

	for (int i = 0; i < size; i++) {
		printf("------------------------------------------------------\n");
		printf("Address of pointer to array made of Structure using p_part[i].number : %p\n", &p_part[i].number);
		printf("pointer to array made of Structure using p_part[i].number is : %d\n", p_part[i].number);
		printf("Address of pointer to array made of Structure using p_part[i].name is : %p\n", &p_part[i].name);
		printf("pointer to array made of Structure using p_part[i].name is : %s\n", p_part[i].name);
		printf("Address of pointer to array made of Structure using p_part[i].price is : %p\n", &p_part[i].price);
		printf("pointer to array made of Structure using p_part[i].price is : %d\n", p_part[i].price);

	}
	// method 1 to print
	for (int i = 0; i < size; i++) {
		printf("------------------------------------------------------\n");
		printf("Address number :%p\n", &p_part->number);
		printf("pointer to array made of Structure part number using p_part->number is : %d\n", p_part->number);
		printf("Address name :%p\n", &p_part->name);
		printf("pointer to array made of Structure part number using p_part->name is : %s\n", p_part->name);
		printf("Address price :%p\n", &p_part->price);
		printf("pointer to array made of Structure part number using p_part->price is : %d\n", p_part->price);
		p_part++;
	}

}



