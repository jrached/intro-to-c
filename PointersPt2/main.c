#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593

float areaCircle(float radius); //Call-by-value functions
float areaCircle2(float *radius); //Call-by-reference function.

int main()
{

    float myRadius = 10;
    float area;

    area = areaCircle(myRadius);

    printf("\n\n\tArea of circle of radius %.2f is: %.2f\n", myRadius, area);

    area = areaCircle2(&myRadius);

    printf("\n\n\tArea of circle of radius %.2f is: %.2f\n", myRadius, area);

    return 0;
}

float areaCircle(float radius)
{
    radius = 1;

    return PI*radius*radius;
}

float areaCircle2(float *radius)
{
    *radius = 1;

    return PI* *radius* *radius;
}
