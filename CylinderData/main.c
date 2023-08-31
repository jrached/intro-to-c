/*
    This program will create a file that contains 100 radii and heights
    for a cylinder to be used in calculations of surface area, section area, and volume.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float height, radius;
     FILE *cylinderData;

    cylinderData = fopen("CylinderData.txt", "w");

    if(cylinderData == NULL)
    {
        printf("\n\n\a\tERROR: The file was not created");
        return -1;
    }

    for(i = 1; i <= 100; i++)
    {
        radius = (rand()%100 + 1)/10.0;
        height = (rand()%100 + 1)/20.0;
        printf("\n%f\t%f", radius, height);
        fprintf(cylinderData, "\n%f\t%f", radius, height);
    }

    //The following function closes the file fclose(cylinderData);


    return 0;
}
