/*Demo Operater precedence*/

#include <stdio.h>

int main()
{
       int answer = 0;
       float float_answer = 0.0;
       answer = (1 + 2 * 3);
       printf("Answer is: %d \n", answer);
       answer = 10 % 3 * 3 - (1 + 2);
       printf("Answer is: %f \n", float_answer);
       answer = ((1 + 2) * 3);
       printf("Answer is: %d \n", answer);
       return 0;
}