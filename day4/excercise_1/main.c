//check if x is greater than y?

#include <stdio.h>
int x, y;
int main()
{
       printf("\nEnter two numbers : \n");
       scanf("%d %d", &x, &y);
       printf("This number %d is bigger\n", (x > y) ? x : y);
       return 0;
}