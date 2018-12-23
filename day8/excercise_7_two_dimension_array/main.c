/* ####################################################
Demo Array creation monthly expenses with month names
Calculate Average expenses for the year
#######################################################*/

#include <stdio.h>
#include <stdlib.h>
# define DIM1_SIZE 5
# define DIM2_SIZE 4

int array[DIM1_SIZE][DIM2_SIZE];
int main() {
       for (int i = 0; i < DIM1_SIZE; ++i)
       {
              for (int j = 0; j < DIM2_SIZE; ++j)
              {
                     array[i][j] = rand();
                     printf("Array Element [%d][%d] %d \n", i, j, array[i][j]);

              }
       }
       return 0;
}