/* sizeof.c—Program to tell the size of the C variable */
/* Type in bytes 
tells you exactly how many bytes
each variable type on your computer takes. 
If you’re using a standard 32-bit PC your outputs will be
different than 64 bit machines*/

#include <stdio.h>

int main()
{
    printf("A char is %ld bytes \n", sizeof(char));
    printf("A int is %ld bytes \n", sizeof(int));
    printf("A short is %ld bytes \n", sizeof(short));
    printf("A long is %ld bytes \n", sizeof(long));
    printf("A long long is %ld bytes \n", sizeof(long long));
    printf("A unsigned char is %ld bytes \n",
           sizeof(unsigned char));
    printf("A unsigned int is %ld bytes \n",
           sizeof(unsigned int));
    printf("A unsigned short is %ld bytes \n",
           sizeof(unsigned short));
    printf("A unsigned long is %ld bytes \n",
           sizeof(unsigned long));
    printf("A unsigned long long is %ld bytes \n",
           sizeof(unsigned long long));
    printf("A float is %ld bytes \n",
           sizeof(float));
    printf("A double is %ld bytes \n",
           sizeof(double));
    printf("A long double is %ld bytes \n",
           sizeof(long double));
    return 0;
}