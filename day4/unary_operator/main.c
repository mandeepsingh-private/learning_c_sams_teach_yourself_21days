/* sizeof.c—Program to tell the size of the C variable */
/*Demo pre and post decrememt of unary operator*/

#include <stdio.h>

int main()
{
       int a = 5;
       int b = 5;
       printf("Post decrement %d pre decrement %d\n", a--, --b);
       printf("Post decrement %d pre decrement %d\n", a--, --b);
       printf("Post decrement %d pre decrement %d\n", a--, --b);
       printf("Post decrement %d pre decrement %d\n", a--, --b);
       printf("Post decrement %d pre decrement %d\n", a--, --b);
       return 0;
}