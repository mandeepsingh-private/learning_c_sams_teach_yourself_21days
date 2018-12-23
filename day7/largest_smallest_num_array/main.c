/* Demonstration of finding largets and smallest of 5 numbers */

#include <stdio.h>


int main( void )
{
       int array[5];
       printf("Input 5 numbers\n");
       printf("Input number 1 : \n");
       scanf("%d", &array[0]);
       printf("Input number 2 : \n");
       scanf("%d", &array[1]);
       printf("Input number 3 : \n");
       scanf("%d", &array[2]);
       printf("Input number 4 : \n");
       scanf("%d", &array[3]);
       for (int i = 0; i < 4; ++i) {
              printf("Input array  %d \n", array[i]);
       }


       int temp;
       for (int i = 0; i < 4; ++i)
       {
              for (int j = i + 1; j < 4; ++j)
              {
                     if (array[i] > array[j])
                     {
                            temp = array[i];
                            array[i] = array[j];
                            array[j] = temp;

                     }
              }

       }
       for (int i = 0; i < 4; ++i) {
              printf("Sorted array  %d \n", array[i]);
       }
       printf("###############################\n");
       printf("Largest number %d \n", array[3]);
       printf("Smallest number %d \n", array[0]);

       return 0;

}

