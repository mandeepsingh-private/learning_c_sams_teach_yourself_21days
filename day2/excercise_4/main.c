/* Created by Mandeep Singh Date: 12/26/2018 */
#include <stdio.h>
//This program prints ASCII charatcter of numbers represneted between 65 - 90
int main(void)
{
    int ctr;
    for (ctr = 65; ctr < 91; ctr++)
        printf("%d = %c\n", ctr, ctr);
    return 0;
}
/* end of program */