#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593

float circumferenceC(float x);
int main()
{

float     radius,
          circumference;


        printf("\n\n\tEnter Radius: ");
        scanf("%f", &radius);

                         circumference = circumferenceC(radius);
                         printf("\n\n\tCircumference is: %f\n", circumference);

    return 0;
}


float circumferenceC(float x)
{
    float circumference;

    circumference = 2*PI*x;

    return circumference;
}
