#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  degrees;

    float  radians,
           PI=3.141593;




    printf("                     Degrees to Radians");


    for( degrees = 0; degrees <= 360; degrees = degrees + 10 )
    {

            radians = (degrees*PI)/180;
            printf("\n\nDegrees                        Radians       ");
            printf("\n\n%d                             %f", degrees, radians);


    }

    printf(" \n\n  PROGRAM TERMINATED\n");




    return 0;
}
