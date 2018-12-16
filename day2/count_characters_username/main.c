/* ex02-05.c */
//Program prompts user to inout name
// and counts number of characters in the name supplied by user
#include <stdio.h>
#include <string.h>
int main(void)
{
    char buffer[256];

    printf("Enter your name and press<Enter>:\n");
    gets(buffer);

    printf("\nYour name has %ld characters and spaces !\n", strlen(buffer));

    return 0;
}