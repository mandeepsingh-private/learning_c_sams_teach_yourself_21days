/* ####################################################
Demo Array size
#######################################################*/

#include <stdio.h>
# define MONTHS 12

int int_array[100];
float float_array[100];
double double_array[100];
char * string_array[100];

int main() {

       printf("Size of int array : %lu \n", sizeof(int_array));
       printf("Size of float array : %lu \n", sizeof(float_array));
       printf("Size of double array : %lu \n", sizeof(double_array));
       printf("Size of string array : %lu \n", sizeof(string_array));

       return 0;
}