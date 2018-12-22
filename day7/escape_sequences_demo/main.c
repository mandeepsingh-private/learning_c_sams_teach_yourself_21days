/* Demonstration of frequently used escape sequences */

#include <stdio.h>
//set constant value quit =3
#define QUIT 3

// function prototypes
int get_menu_choice( void );
void print_report( void );

int main( void )
{
       int choice = 0;

       while (choice != QUIT)
       {
              choice = get_menu_choice();

              if (choice == 1)
                     printf("\nBeeping the computer\a\a\a");
              else
              {
                     if (choice == 2)
                            print_report();

              }

       }
       printf("You chose to quit!\n");

       return 0;

}

// get user input
int get_menu_choice( void )
{
       int selection = 0;

       do
       {
              printf( "\n" );
              printf( "\n1 - Beep Computer" );
              printf( "\n2 - Display Report");
              printf( "\n3 - Quit\n");
              printf( "\n");
              printf( "\nEnter a selection: ");
              scanf("%d", &selection );
       } while ( selection < 1 || selection > 3 );
       return selection;
}
// print the report
void print_report( void )
{
       printf( "\nSummarized REPORT");
       printf( "\n\nSequence\tMeaning" );
       printf( "\n == == == == = \t == == == = ");
       printf( "\n\\a\t\tbell (alert)" );
       printf( "\n\\b\t\tbackspace" );
       printf( "\n\\f\t\tForm Feed" );
       printf( "\n...\t\t...");
}