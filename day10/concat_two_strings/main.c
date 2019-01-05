/**
 * C program to demonstrate malloc() and free() function.
 malloc() allocates N bytes in memory and return pointer to allocated memory.
 The returned pointer contains link/handle to the allocated memory. Using that
 you can access the memory allocated.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//pointer to hold the memory for concatenated string
char *concat_string;

//array to read string 1
char string1[20];
//array to read string 2
char string2[20];
// capture length of string 1
int len_string1 = 0 ;
// capture length of string 2
int len_string2 = 0 ;
// combined length of string1 and string 2
int combined_length = 0;

int main()
{

       printf("Enter  string1 < 20 charcaters without spaces: ");
       scanf("%20s", string1);
       len_string1 = strlen(string1);
       printf("length of string 1 is :%d\n", len_string1);
       //e,g input1 = MANDEEP
       //len = 7
       printf("Enter  string2 < 20 charcaters without spaces: ");
       scanf("%20s", string2);
       len_string2 =  strlen(string2);
       printf("length of string 2 is :%d\n", len_string2);
       //e.g input2= SINGH
       //len = 5

       combined_length = len_string1 + len_string2;
       //combined length =12

       //allocate memory for the concatenated string on heap with size of two strings len =13
       concat_string = (char *) malloc((combined_length + 1) * sizeof(char));
       // If memory not allocated
       if (concat_string == NULL)
       {
              printf("Memory is not created!!!");
              exit(0); // Exit from the program
       }

       printf("Concatenated String is : ");
       //Assign the string1 into concatenated string
       for (int i = 0; i < len_string1; i++)
       {
              if (string1[i] != '\0') {
                     concat_string[i] = string1[i];
                     //printf("%c", concat_string[i]);
              }
       }
       // run two simultaneous loop
       // i from length of string 1 to combined length to use with concat_string
       // j from 0 to length of string to use with string2
       //e.g. i from 7 to 12 as concat_string already stores MANDEEP
       //e.g. j from 0 to 5
       for (int i = len_string1, j = 0; i < combined_length && j < len_string2; i++, j++)
       {
              //Assign the string2 into concatenated string
              if (string2[j] != '\0') {
                     concat_string[i] = string2[j];

              }
       }
       // Print the string
       for (int i = 0; i < combined_length; i++)
       {

              printf("%c", concat_string[i]);

       }
       printf("\n");

       // Release allocated memory
       free(concat_string);

       return 0;
}