#include <stdio.h>

// Will occupy memory at compile time on stack
// Global scope allocation
int a;

void generate_numbers()
{
       // Will occupy memory at compile time on stack
       // static allocation
       static int c = 10;

       c++;

       printf("c = %d\n", c);
}


int main()
{
       // Will occupy the memory at compile time on stack
       // Automatic allocation
       int b;

       // assigning value to test/print
       a = 10;
       b = 20;

       // Print values
       printf("a = %d\n", a);
       printf("b = %d\n", b);

       generate_numbers();
       generate_numbers();

       return 0;
}