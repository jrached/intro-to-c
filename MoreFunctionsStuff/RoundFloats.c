//This file is for function definitions.

#include <math.h>


float roundToTenth(float x)
{
    float tenth, result;

    tenth = x*10 + 0.5;
    result = floor(tenth)/10;

    return result;
}

float roundToHundredth(float x)
{
    float hundredth, result;

    hundredth = x*100 + 0.5;
    result = floor(hundredth)/100;

    return result;
}

float roundToThousandth(float x)
{
    float thousandth, result;

    thousandth = x*1000 + 0.5;
    result = floor(thousandth)/1000;

    return result;
}

int roundToInteger(float x)
{
    float integer, result;

    integer = x + 0.5;
    result = floor(integer);

    return result;
}

void menu(void)
{
    printf("\n\t\t\t Choose the decimal place."
           "\n\t\t\t -To round to the nearest integer enter 1."
           "\n\t\t\t -To round the the nearest tenth enter 2."
           "\n\t\t\t -To round to the nearest hundredth enter 3."
           "\n\t\t\t -To round to the nearest thousandth enter 4."
           "\n\t\t\t -To display all of the above enter any value not on this list."
           "\n\t\t\t -To end the program enter -1\n");
}

