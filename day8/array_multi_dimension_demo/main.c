/* ####################################################
Demo Three dimesion array demo
Generates 1000 numbers
#######################################################*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int count = 0;
  int random_array[10][10][10];
  for (int i = 0; i < 10; ++i)
  {
    for (int j = 0; j < 10; ++j)
    {
      for (int k = 0; k < 10; ++k)
      {
        random_array[i][j][k] = rand();
        printf("Three dimensional array random_array[%d][%d][%d] is : %d\n",
               i, j, k, random_array[i][j][k]);
        printf("\n Press Enter to continue or ctrl C for cancel ");
        getchar();
        count += 1;

      }

    }

  }
  printf("Total numbers generated in array were %d\n", count);
  return 0;
}