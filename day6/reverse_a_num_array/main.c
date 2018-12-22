//Generates a box with x and y dimensions

#include <stdio.h>

// declare functions
void reverse_a_array(int how_many_numbers);

//Main function
int main()
{
       int how_many_numbers = 0;

       printf("Provide how many numbers array to generate & reverse <1000 : ");
       scanf("%d", &how_many_numbers);

       reverse_a_array(how_many_numbers);
       return 0;
}

//generate array upto user input
void reverse_a_array(int how_many_numbers)
{
       int array[1000];
       int reverse_array[1000];
       // create a array for amount of numbers requested by user
       for (int i = 0; i <= how_many_numbers; i++)
       {
              array[i] = i;
              printf("%d Array is : %d\n", i, array[i]);
       }
       //reverse the array
       for (int i = 0, j = how_many_numbers; i <= how_many_numbers; i++, j--)
       {
              reverse_array[j] = array[i];
       }
       //Print the reeversed array
       for (int i = 0; i <= how_many_numbers; i++)
       {
              printf("%d Reverse Array is : %d\n", i, reverse_array[i]);
       }
}