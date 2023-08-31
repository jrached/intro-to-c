#include <stdio.h>
#include <stdlib.h>
#define ROW 20

int main()
{
    int i;

    float pressure[ROW], temperature[ROW], maxPress,
                                           minPress,
                                           maxTemp,
                                           minTemp;

    printf("\t\t\t\t\tTemperature And Pressure Array");

    for(i = 0; i < ROW; i++)
    {
        printf("\n\t%d) Temperature:", i+1);
        scanf("%f", &temperature[i]);
        printf("\t%d) Pressure:", i+1);
        scanf("%f", &pressure[i]);
    }

    printf("\n\n\t\t\tTemperature:\t\t\t\t\tPressure:\n\n");

    for(i=0; i < ROW; i++)
    {
        printf("\t\t\t%.2f\t\t\t", temperature[i]);
        printf("\t\t\t%.2f\n", pressure[i]);
    }

        maxPress = pressure[0];
        minPress = pressure[0];
        maxTemp = temperature[0];
        minTemp = temperature[0];

    for(i = 1; i < 20; i++)
    {
        if(pressure[i] > maxPress)
        {
            maxPress = pressure[i];
        }

        if(pressure[i] < minPress)
        {
            minPress = pressure [i];
        }

        if(temperature[i] > maxTemp)
        {
            maxTemp = temperature [i];
        }

        if(temperature[i] < minTemp)
        {
            minTemp = temperature[i];
        }
    }

    printf("\n\n\t\t\t\t\tMinimum Pressure: %.2f\n", minPress);
    printf("\t\t\t\t\tMinimum Temperature: %.2f\n", minTemp);
    printf("\t\t\t\t\tMaximum Pressure: %.2f\n", maxPress);
    printf("\t\t\t\t\tMaximum Temperature: %.2f\n", maxTemp);

    return 0;
}
