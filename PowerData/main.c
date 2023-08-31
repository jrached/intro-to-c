#include <stdio.h>
#include <stdlib.h>

int main()
{

    float weeklyAvg[8];
    float dailyAvg[7];
    int sum;
    float average;
    int powValue, totalValues;
    int i, j;

    FILE *powerData = fopen("power1.txt", "r");



    if(powerData == NULL)
    {
        printf("\n\n\t\aERROR: File could not opened.");
        return -1;
    }

    //To read the file end to end one value at the time.

    sum = 0;
    while(!feof(powerData)) //File End Of File (feof) returns true as long as we are at the end of the file. //Files by default start with pointer at the beginning.
    {
        fscanf(powerData,"%d", &powValue);
        sum = sum + powValue;
    }

    average = sum/56.0;
    printf("\n\n\tAverage power for the 8 weeks: %f\n", average);

    rewind(powerData); //Places the pointer back at the beginning of the file,

    for(i = 0; i < 8; i++)
    {
        sum = 0;

        for(j = 0; j < 7; j++)
        {
            fscanf(powerData, "%d ", &powValue);

            sum = sum + powValue;
        }
        weeklyAvg[i] = (float)sum/7;
        printf("\n\tWeek %d average: %f\n", i+1, weeklyAvg[i]);
    }

    rewind(powerData);




    //You need to figure out how to fix everything underneath this.
    //This loop is supposed to scan for columns in the file.

    for(i = 0; i < 8; i++)
    { sum = 0;

        for(j = 0; j < 7; j++)
        {

             fscanf(powerData, "%d \n", &powValue);

              sum = sum + powValue;

        }
        dailyAvg[i] = (float)sum/8;
        printf("\n\tDay %d average: %f\n", i+1, dailyAvg[i]);
    }

    return 0;
}
