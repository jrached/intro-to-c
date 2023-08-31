/*
  Modularity.

  Introduction to user-defined functions.

  The program will determine the largest number of two integers using functions.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function prototypes go after the list of libraries.

int maxInt(int x, int y); //function prototype.


int main()
{

    int value1, value2, largest;

    printf("   Please enter your values: ");
    scanf("%d %d", &value1, &value2);

    largest = maxInt(value1, value2);

    printf("\n\n   The largest value is: %d\n", largest);

    return 0;
}

//definition of function prototypes comes after the main ends.

int maxInt(int x, int y)
{
    int largest;


    if( x > y )
       {
            largest = x;
       }
       else
         {
              largest = y;

         }

    return largest;
}
