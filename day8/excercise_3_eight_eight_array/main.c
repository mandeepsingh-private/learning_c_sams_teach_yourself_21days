/* ####################################################
Demo eight eight elements initialize to 88
#######################################################*/

#include <stdio.h>
#define SIZE 88

int main() {
       int array[SIZE];
       for (int i = 0; i < SIZE; ++i)
       {
              array[i] = 88;
              printf("Intialized array element %d is : %d \n", i, array[i]);
       }

       return 0;
}