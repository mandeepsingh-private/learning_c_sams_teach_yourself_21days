/* ####################################################
Demonstrates structures that contain other structures
in array
#######################################################*/

#include <inttypes.h>
#include <stdio.h>

//Define part
struct part {
	int number;
	char name[20];
};

struct part* p_part;

struct part gizmo = {
	111,
	"pedal"
};


int main() {
	p_part = &gizmo;
	printf("------------------------------------------------------\n");
	printf("pointer to structure part number using (*p_part).number) is : %d\n", (*p_part).number);
	printf("pointer to Structure part number using p_part->number is : %d\n", p_part->number);
}