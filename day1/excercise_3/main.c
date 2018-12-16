#include <stdio.h>

// program prints X 10 columns X 10rows
/*Created by Mandeep Singh Date: 12/26/2018*/
int x, y;

int main(void)
{
    for (x = 0; x < 10; x++)
    {
        printf("\n");
        for (y = 0; y < 10; y++)
        {
            printf("X");
        }
    }
    return 0;
}