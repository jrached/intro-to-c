#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "CircleCalculations.h"
#define PI 3.141593

int main()
{
    float radius,
          circumference,
          areaCircle,
          volumeCircle;
    int diameter,
        choice;

   printf("\t\t\t\t\tCircle Dimension Calculator\n");

    printf("\n   Instructions: \n"
           "\n   Enter radius and then menu choice."
           "\n   Radius must be higher than zero."
           "\n   For the diameter use whole numbers."
           "\n   For any other procedure use whole numbers or decimals.");

    choice = 0;

   while(choice < 5)
      {
        menu();
        printf("\n>>>");
        printf("\n\n\tEnter Radius: ");
        scanf("%f", &radius);
        scanf("\n\t%d", &choice);

        if( radius > 0)
        {
            switch(choice)
            {
              case 1:    diameter = diameterC(radius);
                         printf("\n\tDiameter is: %d\n\n\n\n\n\n", diameter);
                         break;

              case 2 :   circumference = circumferenceC(radius);
                         printf("\n\tCircumference is: %f\n\n\n\n\n\n", circumference);
                         break;

              case 3 :   areaCircle = areaC(radius);
                         printf("\n\tArea is: %f\n\n\n\n\n\n", areaCircle);
                         break;

              case 4 :   volumeCircle = volumeC(radius);
                         printf("\n\tVolume is: %f\n\n\n\n\n\n", volumeCircle);
                         break;
            }
        }
        else
        {
            printf("\n\n\t\t\t\aERROR: radius must be larger than zero.\n\n\n\n\n\n");
        }
      }

      printf("\n\n\t\t\t\t\t\tEnd of Program.\n");


    return 0;
}







