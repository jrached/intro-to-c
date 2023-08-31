/* Name: Juan Rached.
   Date: 07/31/19.
   Description: Program calculates the amplitude of a damped sinusoidal function
   and writes it on a file for the user to read.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 2.718282
#define PI 3.141593

int main()
{

    float k,
          time,
          amplitude;
          FILE *results;


    printf("\tTime\t\t\t\tAmplitude\n");

    results = fopen("damped_sinusoidal.txt", "w");

     if(results == NULL)
    {
        printf("\n\n\t\t\tERROR: File could not open.\n");

        return -1;
    }

    fprintf(results, "\tTime\t\t\t\tAmplitude\n");
    for(k = 1; k <= 101; k++)
    {
        time = (k - 1)/10;
        amplitude = pow(e, (-1)*time)*sin(2*PI*time);

        printf("\n\t%f\t\t\t%f\n", time, amplitude);
        fprintf(results, "\n\t%f\t\t\t%f\n", time, amplitude);
    }

    fclose(results);

    return 0;
}
