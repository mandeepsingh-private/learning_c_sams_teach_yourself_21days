/* ####################################################
Display address of successive array elements
#######################################################*/
#include <inttypes.h>
#include <stdio.h>
# define SIZE 10

short short_array[SIZE];
int int_array[SIZE];
double double_array[SIZE];


int main() {
       printf("\t short array \t int array \t double array\n");
       for (int i = 0; i < SIZE; ++i)
       {

              printf("\t %ld \t %ld \t %ld\n", (uintptr_t) &short_array[i],
                     (uintptr_t)  &int_array[i], (uintptr_t)&double_array[i]);
       }

       return 0;
}