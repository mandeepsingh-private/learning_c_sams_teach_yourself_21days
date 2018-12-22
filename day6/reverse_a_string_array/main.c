//Generates a box with x and y dimensions

#include <stdio.h>
#include <string.h>
// declare functions
void reverse_a_array(char word[]);

//Main function
int main()
{
       char word[20];

       printf("Enter a word upto 20 characters long : ");
       scanf("%s", word);
       printf("\nYou entered : %s\n", word);
       reverse_a_array(word);
       return 0;
}

//generate array upto user input
void reverse_a_array(char word[])
{
       int arrayLength = 0;
       char reverse_array[20];
       arrayLength = strlen(word);
       // create a array for user word
       /*for (int i = 0; i <= arrayLength; i++)
       {
              printf("%d Array is : %c\n", i, word[i]);
       }*/

       //Reverse the array by looping into it
       for (int i = 0, j = arrayLength; i <= arrayLength; i++, j--)
       {
              reverse_array[j] = word[i];
       }

       //Print the reversed array by looping into it
       printf("Your name reversed is : ");
       for (int i = 0; i <= arrayLength; i++)
       {

              printf("%c", reverse_array[i]);
              if (i == arrayLength)
              {
                     printf("\n");
              }
       }
}