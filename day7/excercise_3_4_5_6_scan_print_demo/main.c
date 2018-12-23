//Generates a box with x and y dimensions

#include <stdio.h>

int getInput();

int main()
{
       int n = 0; //initialize empty number
       // Loop to count entries by user
       // allow maximum 6 entries
       // unless number 99 is entered
       int i = 0; //counter to track 6 numbers
       while (n != 99 && i < 6) {
              n = getInput();
              if (n % 2 != 0) {
                     printf(" Your input was odd number\n");

              }
              else {
                     printf("Your input was %d \n", n);
                     i += 1;
                     printf("I after increment is : %d \n", i);
              }

       }
       return 0;
}

int getInput() {
       int n = 0;
       printf("Input a even integer value /n : ");
       scanf("%d", &n);
       return n;
}