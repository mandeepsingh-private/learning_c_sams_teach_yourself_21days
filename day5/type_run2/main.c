/* Purpose: Pick a random number between 0 and 100 
and let user try to guess it*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NO 0
#define YES 1

int main()
{
       int number = 0;
       int user_guess = 0;
       int nbr_of_guesses = 0;
       int done = NO;
       srand(time(NULL));
       number = rand() % 101;
       while (done == NO)
       {
              printf("Pick a number between 0 and %d : ", 100);
              scanf("%d", &user_guess);

              if (user_guess == number)
              {
                     printf("You did it! \n");
                     done = YES;
              }
              if (user_guess < number)
              {
                     printf("You guessed low! \n");
              }
              if (user_guess > number)
              {
                     printf("You guessed high! \n");
              }
       }
       return 0;
}