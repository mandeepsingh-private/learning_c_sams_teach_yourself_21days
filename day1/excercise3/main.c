#include <stdio.h>

// program prints X 10columns X 10rows
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