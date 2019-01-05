#include <stdio.h>
#include <stdlib.h> // To use dynamic memory allocation functions
#define LENGTH 80
//single character
char letter = '$';
//note arrays are pointer itself
char sentence[] = "pointers are fun!";
//create a character pointer
char *p_sentence = "pointers are fun!";
//note arrays are pointer itself
char input_sentence[LENGTH];
char copied_input_sentence[LENGTH];
char copied_output[LENGTH];
// declare 2 strings to find bigger one
char string1[LENGTH];
char string2[LENGTH];
char *p_bigger_string;

// declare copy function
int copy_string(char *input_sentence, char *copied_input_sentence);

char *find_bigger_string(char *string1, char *string2);

int main()
{
       //using char
       printf("The Letter is :%c\n", letter);
       //using array
       printf("The sentence is :%s\n", sentence);
       //using character sentence
       printf("The pointer read only sentence is :%s\n", p_sentence);
       // take user input
       printf("Please input a sentence \n ");
       //NOTE: Arrays are pointer itself hus no need to specify & in scanf
       scanf("%80s", input_sentence);
       printf("Your input was %s \n", input_sentence);
       copy_string(input_sentence, copied_input_sentence);
       printf("Input string 1 less  : ");
       scanf("%s", string1);
       printf("Input string 2 : ");
       scanf("%s", string2);
       p_bigger_string = find_bigger_string(string1, string2);
       printf("BIGGER STRING IS %s\n", p_bigger_string);
       return 0;
}

//copy one string to another
int copy_string(char *input_sentence, char *copied_input_sentence)
{
       copied_input_sentence = input_sentence;
       printf("Copied string is %s\n", copied_input_sentence);
       return 0;
}
//find bigger of two strings
char *find_bigger_string(char *string1, char *string2)
{
       int size_string1 = 0;
       int size_string2 = 0;
       // \0 is a null character whcih end every string, use that to count length
       for (int i = 0; i < LENGTH; i++)
       {
              if (string1[i] != '\0')
              {
                     size_string1 += 1;
              }
              if (string2[i] != '\0')
              {
                     size_string2 += 1;
              }
       }
       printf("Size of string 1 is%d\n", size_string1);
       printf("Size of string 2 is%d\n", size_string2);
       if (size_string1 > size_string2)
       {
              return string1;
       }
       return string2;
}