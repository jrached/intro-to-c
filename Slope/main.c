/* Name: Juan Rached
   Date: 06/02/19
   Description: Program which calculates the slope of a line. The program recognizes common mistakes,
   like having the same value for x1 and x2 with different values of y1 and y2 which does not really describe a function
   and for that matter yields an "undefined" slope. It also recognizes when the user enters the same coordinate twice,
   describing a point instead of a line, and it recognizes when y1 = y2 yielding a horizontal slope of value zero.
   For all of these special cases, the program informs the user when they occur.
   If none of those special cases occur, then the program proceeds to using the slope formula m = (y2-y1)/(x2-x1).

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

   float x1,
         x2,
         y1,
         y2,
         slope;


   printf("                       Rached's Slope of a Line Calculator");
   printf("\n\n   Enter your coordinates,");
   printf("\n\n First coordinate (x1,y1):");
   scanf("%f,",&x1);
   scanf("%f",&y1);
   printf("\n\n Second coordinate (x2,y2):");
   scanf("%f,",&x2);
   scanf("%f",&y2);

   if( x1 != x2||y1 != y2)
   {
       if( x1 != x2)
   {
       if( y1 != y2)
       {
           slope = (y2 - y1)/(x2 - x1);
           printf("\n\n   The slope of the line is :");
           printf("%f\n\n", slope);
       }
       else
       {
           printf("\n\n   The slope is zero. The line is horizontal.\n\n");
       }
   }
   else
   {
       printf("\n\n\a   Error: Slope is undefined. x1 and x2 must have different values.\n\n");
   }

   }
   else
   {
       printf("\n\n   You entered a point. There is no line.\n\n");
   }


    return 0;
}
