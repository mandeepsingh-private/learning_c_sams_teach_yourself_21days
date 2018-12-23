/* ####################################################
Demo Array creation with student names and request their
scores from user and print them.
Calculate Average scores for the year
#######################################################*/

#include <stdio.h>
#define STUDENTS 12
#define MAX_SCORE 100

int main() {

       char *students_array[12] = {"TOM", "HANK", "RAM", "SHYAM", "ARTHUR", "SAM",
                                   "CLAYTON", "LUCAS", "JENKINS", "CHAN", "NEIL", "NED"
                                  };
       int students_scores[12];
       int avg_score = 0;
       for (int i = 0; i < STUDENTS; i++) {
              printf("Enter GRADE 5 score for student %s : ", students_array[i]);
              scanf("%d", &students_scores[i]);
              while (students_scores[i] > MAX_SCORE)
              {
                     printf("Max score allowed is only below 100 \n");
                     printf("Enter correct score \n");
                     scanf("%d", &students_scores[i]);
              }
              avg_score += students_scores[i];
       }
       printf("avg_score is %d \n", avg_score);
       return 0;
}