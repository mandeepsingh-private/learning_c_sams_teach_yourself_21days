/* Created by Mandeep Singh Date: 12/26/2018 */
#include <stdio.h>
//prompt user for 2 numbers and multiply them
int main(void)
{
    int num1;
    int num2;
    int answer;
    printf("Enter number 1 : ");
    //take input from user and assign to num1 by using its memory address
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    //take input from user and assign to num2 by using its memory address
    scanf("%d", &num2);
    answer = num1 * num2;
    // print memeory address of avriables
    printf("pointer address of num1 : %p ,and num2 : %p \n", &num1, &num2);
    printf("You originally entered num1 : %d , num2 : %d \n", num1, num2);
    printf("Answer is : %d \n", answer);
}
/* end of program */