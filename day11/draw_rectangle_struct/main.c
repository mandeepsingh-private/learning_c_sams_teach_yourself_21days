/* ####################################################
1: Demonstrates structures that contain other structures.
2: Receives input for corner coordinates of a rectangle and
3: calculates the area.
4: Assumes that the y coordinate of the
5: lower-right corner is greater than the y coordinate of the
6: upper-left corner, that the x coordinate of the lower-
7: right corner is greater than the x coordinate of the upper-
8: left corner, and that all coordinates are positive.
#######################################################*/

#include <inttypes.h>
#include <stdio.h>


struct coord {
	int x;
	int y;
};

struct rectangle {
	struct coord topleft;
	struct coord bottomright;
} rectangle_box;

int length = 0;
int width = 0;
int area = 0;

int main() {

	/* Input the top left coordinates */
	printf("Enter the top left x coordinates e.g 4 : ");
	scanf("%d", &rectangle_box.topleft.x);
	/* Input the top left coordinates */
	printf("Enter the top left y coordinates e.g 4 : ");
	scanf("%d", &rectangle_box.topleft.y);

	/* Input the bottom right coordinates */
	printf("Enter the bottom right  x coordinate e.g. 4: ");
	scanf("%d", &rectangle_box.bottomright.x);

	/* Input the bottom right coordinates */
	printf("Enter the bottom right  y coordinate e.g. 4: ");
	scanf("%d", &rectangle_box.bottomright.y);

	if (rectangle_box.bottomright.x > rectangle_box.topleft.x)
	{
		printf("Incorrect input\n");
		printf("********************************************************\n" );
		printf("Bottom coordinates cannot be greater than top coordinates\n");
		printf("*********************************************************\n" );
		return 1;
	}

	if (rectangle_box.bottomright.x <= 0 ||
	        rectangle_box.topleft.x <= 0 ||
	        rectangle_box.bottomright.y <= 0 ||
	        rectangle_box.topleft.y <= 0 )
	{
		printf("Incorrect input\n");
		printf("****************************\n" );
		printf(" Coordinates cannot be 0 or negative \n");
		printf("*****************************\n" );
		return 1;
	}

	length = rectangle_box.topleft.y -  rectangle_box.bottomright.y;
	width = rectangle_box.topleft.x -  rectangle_box.bottomright.x;
	area = length * width;

	//Draw the Rectangle
	printf("\n");
	for (int i = 0; i < width + 1; i++)
	{
		printf("-%c", '-');
	}

	for (int i = 0; i < length; i++)
	{
		printf("\n%c", '|');
		for (int j = 0; j < 2 * width; j++)
		{


			printf("%c", ' ');

		}
		printf("%c", '|');
	}
	printf("\n");
	for (int i = 0; i < width + 1; i++)
	{
		//printf("%d", i);
		printf("-%c", '-');

	}
	printf("\n");
	printf("Length of rectangle is %d:\n", length);
	printf("width of rectangle is %d:\n", width);
	printf("Area of rectangle is %d:\n", area);
	return 0;
}