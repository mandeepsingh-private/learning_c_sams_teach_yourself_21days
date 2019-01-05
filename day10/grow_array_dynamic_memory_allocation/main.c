#include <stdio.h>
#include <stdlib.h> // To use dynamic memory allocation functions

int *growArray(int *p_values, int cur_size);
int *p_values;
int *p_new_values;
int i = 0;
int size = 2;

int main()
{


       // allocate memory on stack for pointer to values
       p_values = malloc(size * sizeof(int));
       // declare place to store values from user
       int val;
       printf("Please enter a number: ");
       scanf("%d", &val);
       while (val > 0)
       {
              printf("Value of i is: %d\n", i);
              printf("Size is:  %d\n", size) ;
              if (size == i + 1)
              {
                     // now all we need to do is implement growArray
                     printf("---------- Calling Grow array ----------\n");
                     p_values = growArray(p_values, size);
                     // increment the size to updated size which was one done
                     //while growing the array inside the function
                     size = (size * sizeof(int) * 2);
              }
              p_values[i] = val;
              printf("User entered value %d is : %d\n", i, p_values[i]);
              printf("Please enter a number ( or 0 to exit): ");
              scanf("%d", &val);
              //increment each inputed number
              ++i;
       }
       printf("All the numbers entered are :\n");
       for (int i = 0; i < size; i++) {

              printf("%d\n", p_values[i]);

       }
       free(p_values);
       p_values = NULL;

       return 0;
}

int *growArray(int *p_values, int cur_size)
{
       printf("######### Success Grow array is called ###########\n");
       p_new_values = malloc(cur_size * sizeof(int) * 2);
       for (int i = 0; i < cur_size; ++i)
       {
              p_new_values[i] = p_values[i];
       }
       free(p_values);
       p_values = NULL;
       return p_new_values;
}
