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
struct time {
	int hour;
	int minutes;
	int seconds;
};

struct time today = {
	23,
	59,
	59,
};


int main() {

	printf("current time is : %d:%d:%d\n", today.hour, today.minutes, today.seconds);

	return 0;
}