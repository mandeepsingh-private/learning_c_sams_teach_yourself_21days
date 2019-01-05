#include <stdio.h>
#include <stdlib.h>     // To use dynamic memory allocation functions


int main()
{
       // int pointer to store address of dynamic declared memory
       int *parr;

       // n - To get the limit
       // i - Loop counter
       int n, i;

       printf("Enter limit: ");
       scanf("%d", &n);

       // Allocate memory for n elements at runtime
       parr = malloc(n * sizeof(int));

       // check memory allocation error like overflow
       if (parr == NULL)
       {
              printf("Insufficient Memory!!!\n");
              return 0;
       }

       // Read n elements
       printf("Input %d elements:\n", n);
       for (i = 0; i < n; i++)
       {
              printf("Enter element %d: ", i + 1);
              scanf("%d", (parr + i));
       }

       // Print array elements
       printf("Input elements: \n");
       for (i = 0; i < n; i++)
       {
              printf("%d\n", *(parr + i));
       }

       // Release memory occupied by dynamically allocated array
       free(parr);

       return 0;
}