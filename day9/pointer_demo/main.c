/* ####################################################
Pointer Demo
#######################################################*/

#include <stdio.h>
# define  SIZE 100
//declare a integer
int rate = 1;
// declare a int pointer
int *p_rate = NULL;

//declare a array
int array[100];

int *p_array = NULL;

int main() {
       //assign pointer to address of rate
       p_rate = &rate;

       //print the vlaues in variable
       printf("Direct access rate = %d \n", rate);
       printf("In Direct access  pointer to rate = %d \n", *p_rate);

       //print the address of variables
       printf("Address of rate  = %p \n", &rate);
       printf("Address rate using pointer p_rate = %p \n", p_rate);

       // create the array
       for (int i = 0; i < SIZE; ++i)
       {
              array[i] = i + 100;

       }
       //assign the Pointer p_array to array, which will be first element by default
       p_array = array;
       printf("Array pointer points to first element : %d \n", *p_array);
       //which is same as
       p_array = &array[0];
       printf("Array pointer points to first element using  & operator : %d \n", *p_array);
       p_array = &array[99];
       printf("Array pointer points to elment 99 : %d \n", *p_array);
       return 0;
}