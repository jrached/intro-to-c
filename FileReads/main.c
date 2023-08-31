//Program reads the cylinderData file and calculates
//the section area, surface area, and volume.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141593

int main()
{
    int i;
    float height, radius, surfaceArea, sectionArea, volume;
          FILE *inputData, *results;

    inputData = fopen("CylinderData.txt", "r");

    if(inputData == NULL)
    {
        printf("\n\n\t\aERROR: Program could not be opened.\n");
        return -1;
    }

    printf("\n Radius\tHeight\t  Section Area\t  Surface Area \t    Volume\n"
           " ---------------------------------------------------------\n");

     results = fopen("FinalResults.txt", "w");

     if(results == NULL)
     {
        printf("\n\n\t\aERROR: Program could not be opened for writing.\n");
        return -1;
     }


    for(i = 1; i <= 100; i++)
    {
        fscanf(inputData, "%f %f", &radius, &height);

        sectionArea = PI*pow(radius, 2);
        surfaceArea = 2*PI*pow(radius, 2) + 2*PI*radius*height;
        volume = PI*height*pow(radius, 2);

        printf("%5.2f\t%5.2f\t%10.2f\t%10.2f\t%10.2f\n",
               radius, height, sectionArea, surfaceArea, volume);

        fprintf(results, "%5.2f\t%5.2f\t%10.2f\t%10.2f\t%10.2f\n",  //The fprintf is used to save the data in another file.
               radius, height, sectionArea, surfaceArea, volume);

    }

    fclose(inputData);
    fclose(results);

    return 0;
}
