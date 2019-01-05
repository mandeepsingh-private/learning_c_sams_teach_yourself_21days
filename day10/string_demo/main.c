/* ####################################################
String Demo
https://www.geeksforgeeks.org/storage-for-strings-in-c/
In C, a string can be referred either using a character pointer or as a character array.
#######################################################*/

#include <stdio.h>
#include <stdlib.h>

# define  SIZE 100

//Create string as array
char state_south[] = "Alabama";
// Create string as pointer
char * state_east2 = "New York";
char * state_east = "New Jersey";

//function prototype
char *getString();


int main() {
       printf("state west is : %s \n", state_south);
       state_south[1] = 'J';
       state_south[2] = 'J';
       printf("state west is now : %s \n", state_south);
       printf("State east is : %s \n", state_east);

       //state_east[1] = 'T'; //cannot do this as it is a pointer on read only memory
       // cannot modify the string
       // you can only point it to new place
       state_east = state_east2;
       printf("State east is : %s \n", state_east);
       //// you can only point it to new value
       state_east = "Maine";
       printf("State east is : %s \n", state_east);


       int size = 4;

       /* Using Dymamic memory
       //Stored in heap segment like other dynamically allocated things */

       char *state_west = (char *)malloc(sizeof(char) * size);
       if (state_west == NULL)
       {
              printf("Not enough memory to allocate buffer\n");
              exit(1);
       }
       printf("Memory allocated on heap\n");
       state_west[0] = 'J';
       state_west[1] = 'A';
       state_west[2] = 'L';
       state_west[0] = 'C'; /* No problem: String is now C */
       printf("String using heap is %s\n", state_west);
       free(state_west);
       printf("Freed the memory \n");
       state_west = NULL;
       printf("String using heap is %s\n", state_west);

       //Using function on heap via dymamic memory, create a String
       state_west  = getString();
       printf("String using heap function call is %s\n", state_west);
       // free the memory alocted by function
       free(state_west);
       state_west = NULL;
       printf("String using heap function call after freeing is %s\n", state_west);
       return 0;
}


// Define a function that create a string and returns it
/* Using Dymamic memory Stored in heap segment like other dynamically allocated things */
char *getString()
{
       int size = 4;
       char *str = (char *)malloc(sizeof(char) * size); /*Stored in heap segment*/
       *(str + 0) = 'Z';
       *(str + 1) = 'Z';
       *(str + 2) = 'Z';
       *(str + 3) = '\0';

       /* No problem: string remains at str after getString() returns */
       return str;
}

