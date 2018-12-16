/* print_it.c This program prints a listing with line numbers
Created by Mandeep Singh Date: 12/26/2018
 */

#include <stdio.h>
#include <stdlib.h>

//declare function do_heading
void do_heading(char *filename);

int line = 0,
    page = 0;

//argc = arguments at command line
//argc = argument value
int main(int argv, char *argc[])
{
    char buffer[256];
    FILE *fp;
    // check if command line argument file name is passed
    //by counting the arguments passed while running?
    if (argv < 2)
    {
        fprintf(stderr, "\n Proper usage is : ");
        fprintf(stderr, "\n\nprint_it filename.ext \n");
        return (1);
    }
    //fopen library function
    //If unable to open the file then throw exception
    if ((fp = fopen(argc[1], "r")) == NULL)
    {
        fprintf(stderr, "Error opening file, %s!", argc[1]);
        return (1);
    }

    page = 0;
    line = 1;

    do_heading(argc[1]);
    //fgets library function read file in buffer
    while (fgets(buffer, 256, fp) != NULL)
    {
        if (line % 55 == 0)
        {
            do_heading(argc[1]);
            fprintf(stdout, "%4d:\t%s", line++, buffer);
        }
        fprintf(stdout, "This is the filename : %s \n", argc[1]);
        //fclose library function: close the file
        fclose(fp);
        return 0;
    }
}

void do_heading(char *filename)
{
    page++;
    if (page > 1)
    {
        fprintf(stdout, "this is the filename inside function\n");
        fprintf(stdout, "Page : % d, %s\n", page, filename);
    }
}