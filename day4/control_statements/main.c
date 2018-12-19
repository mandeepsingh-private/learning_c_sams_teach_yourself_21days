/* Convert user entered time in seconds into hour, minutes and seconds*/

#include <stdio.h>

int main()
{
       int x = 0;
       int y = 0;
       //get input from user
       printf("Please input number 1 :");
       scanf("%d", &x);
       printf("Please input number 2 :");
       scanf("%d", &y);
       if (x > y)
       {
              printf("x =  %d is greater than y = %d \n", x, y);
       }
       if (x < y)
       {
              printf("x = %d is less than y = %d \n", x, y);
       }
       if (x == y)
       {
              printf("x = %d is equal y = %d \n", x, y);
       }

       return 0;
}