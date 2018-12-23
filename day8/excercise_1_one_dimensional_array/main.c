/* ####################################################
Three integer arrays with 1000 elements array and their sizes
#######################################################*/

#include <stdio.h>

int a_array[1000];
int b_array[1000];
int c_array[1000];

int main() {
       printf("size of a_array is : %lu \n", sizeof(a_array));
       printf("size of b_array is : %lu \n", sizeof(b_array));
       printf("size of c_array is : %lu \n", sizeof(c_array));
       return 0;
}