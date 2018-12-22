//Generates a box with x and y dimensions

#include <stdio.h>

// declare functions
void generate_numbers_increment(int how_many_numbers);
void generate_numbers_decrement(int how_many_numbers);
void generate_numbers_countby5(int how_many_numbers);
void generate_array(int how_many_numbers);

//Main function
int main()
{
       int how_many_numbers = 0;

       printf("Provide how many numbers to generate <1000 : ");
       scanf("%d", &how_many_numbers);
       generate_numbers_increment(how_many_numbers);
       generate_numbers_decrement(how_many_numbers);
       generate_numbers_countby5(how_many_numbers);
       generate_array(how_many_numbers);
       return 0;
}

//generate numbers from 0 to user input
void generate_numbers_increment(int how_many_numbers)
{

       for (int i = 0; i <= how_many_numbers; i++)
       {
              printf(" incremental sequence %d \n", i);
       }
}

//generate numbers from user input to 0
void generate_numbers_decrement(int how_many_numbers)
{

       for (int i = how_many_numbers; i > 0; i--)
       {
              printf("decremental sequence %d \n", i);
       }
}

//generate numbers from 0 to user input by increments of 5
void generate_numbers_countby5(int how_many_numbers)
{

       for (int i = 0; i <= how_many_numbers; i = i + 5)
       {
              printf(" incremental sequence %d \n", i);
       }
}

//generate array upto user input
void generate_array(int how_many_numbers)
{
       int array[1000];

       for (int i = 0; i < how_many_numbers; i++)
       {
              array[i] = i;
              printf("%d Array is : %d\n", i, array[i]);
       }
}