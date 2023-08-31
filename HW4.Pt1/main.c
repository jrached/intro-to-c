#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593

int main()
{
    int  degrees;
    float  radians;

    printf("\t                   Degrees to Radians");
    printf("\n\n\tDegrees\t\t\t\t\t\tRadians");

    degrees = 0;

    while(degrees<=360)
    {
        radians = PI*degrees/180;

        printf("\n\n\t%d\t\t\t\t\t\t%f\n", degrees, radians);

        degrees = degrees + 10;
    }


    return 0;
}
