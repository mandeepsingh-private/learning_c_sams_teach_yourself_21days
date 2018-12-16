/* Convert user entered time in seconds into hour, minutes and seconds*/

#include <stdio.h>
#define SEC_PER_MIN 60
#define SEC_PER_HOUR 3600

int main()
{
       unsigned int hours = 0;
       unsigned int minutes = 0;
       unsigned int seconds = 0;
       unsigned int minutes_left = 0;
       unsigned int seconds_left = 0;
       //get input from user
       printf("Please input a number <65000 :");
       scanf("%d", &seconds);
       hours = seconds / SEC_PER_HOUR;
       minutes = seconds / SEC_PER_MIN;
       // divide and find the remainder
       //e.g. remiander of 10000/60 = 40
       minutes_left = minutes % SEC_PER_MIN;
       seconds_left = seconds % SEC_PER_MIN;
       printf("You inputed number : %d, [ which is %d hours %d minutes %d seconds]\n",
              seconds, hours, minutes_left, seconds_left);
       return 0;
}