/* ####################################################
Demo Array creation monthly expenses with month names
Calculate Average expenses for the year
#######################################################*/

#include <stdio.h>
# define MONTHS 12

int main() {
       int array[MONTHS];
       int avg_expenses = 0;
       //create a char array for name of months
       char *month_names[MONTHS] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                                    "JULY", "AUG", "SEPT", "OCT", "NOV", "DEC"
                                   };


       //read expenses from user
       for (int i = 0; i < MONTHS; i++ )
       {
              printf("Enter expenses for each month : %s = ", month_names[i]);
              scanf("%d", &array[i]);
              avg_expenses += array[i];
       }
       //display expenses
       int i = 0;
       while (i < MONTHS) {
              printf("Expenses for month %s are : %d\n", month_names[i], array[i]);
              i += 1;
       }
       printf("Average Expenses are : %d\n", avg_expenses / 12);
       return 0;
}