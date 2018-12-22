//Generates a box with x and y dimensions

#include <stdio.h>

// function prototype for drawing the box
//pass x and y axis of box
void draw_box(int x, int y);

int main()
{
       int x = 0;
       int y = 0;
       printf("Provide x for box ");
       scanf("%d", &x);
       printf("Provide y for box ");
       scanf("%d", &y);
       draw_box(x, y);

       return 0;
}

void draw_box(int x, int y)
{
       //creates the column
       for (int i = 0; i < x; i++)
       {
              // creates the row
              for (int i = 0; i < y; i++)
              {

                     printf("X");
              }
              //create the column
              printf("\n");
       }
}