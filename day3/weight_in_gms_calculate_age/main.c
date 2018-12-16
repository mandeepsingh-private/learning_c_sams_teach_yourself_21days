/* prompts user to enter his weight and year of birth. 
It then calculates and displays the weight in grams 
and his  age in the year 2018.*/

#include <stdio.h>
//define constants
#define GMS_PER_POUND 454
#define CURRENT_YEAR 2018

int main()
{
       long weight_in_kilogms;
       long weight;
       int year_of_birth;
       int age;
       printf("What is your weight in pounds ?");
       // take user input and assign to address of weight
       scanf("%ld", &weight);
       printf("what is your birth year");
       scanf("%d", &year_of_birth);
       weight_in_kilogms = (weight * GMS_PER_POUND) / 1000;
       age = CURRENT_YEAR - year_of_birth;
       printf("Your weight in kilograms is %ld and age is %d \n", weight_in_kilogms, age);

       return 0;
}