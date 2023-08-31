//Intro to Arrays with Functions.

#include <stdio.h>
#include <stdlib.h>



float symArray(float values[], int size);

int main()
{

    float myValues[20],
          sum;
    int i;

    for( i = 0; i < 20; i++)
    {
        myValues[i] = (rand()%10)/2.0;

        printf("")
    }

    sum = sumArray(myValues, 20);

    return 0;
}

float symArray(float values[], int size)
{
    float sum;
    int i;

    for( i = 0; i < size; i++)
    {
        sum += values[i];
    }

    return sum;
}
