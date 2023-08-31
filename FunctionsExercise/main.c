#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141593  //this is another way to define constants. (I personally like it better).


void menu(void);
int diameterC(int x);
float circumferenceC(float x);
float areaC(float x);
float volumeC(float x);

int main()
{
    float circumference,
          areaCircle,
          volumeCircle;
    int radius,
        diameter,
        choice;

    menu();
    choice = 0;

   while(choice < 5)
      {
        printf("\n>>>");
        scanf("\n\t%d", &choice);

        switch(choice)
        {
          case 1:    printf("\n\n\tEnter Radius: ");
                     scanf("%f", &radius);

                       if(radius > 0)
                       {
                         diameter = diameterC(radius);
                         printf("\n\n\tDiameter is: %f\n", diameter);
                       }
                       else
                       {
                            printf("\n\n\t\t\aERROR: Radius must be higher than zero.\n\n");
                       }
                     break;
          case 2 :   printf("\n\n\tEnter Radius: ");
                     scanf("%f", &radius);
                     circumference = circumferenceC(radius);
                     printf("\n\n\tCircumference is: %f\n", circumference);
                     break;
          case 3 :   printf("\n\n\tEnter Radius: ");
                     scanf("%f", &radius);
                     areaCircle = areaC(radius);
                     printf("\n\n\tArea is: %f\n", areaCircle);
                     break;
          case 4 :   printf("\n\n\tEnter Radius: ");
                     scanf("%f", &radius);
                     volumeCircle = volumeC(radius);
                     printf("\n\n\tVolume is: %f\n", volumeCircle);
                     break;
        }

      }

      printf("\n\n\t\tEnd of Program.\n");


    return 0;
}


//Displays available options to the user.

void menu(void)
{
    printf("\tChoose from an option below"
           "\n\n\t\t1. Diameter."
           "\n\n\t\t2. Circumference."
           "\n\n\t\t3. Area."
           "\n\n\t\t4. Volume."
           "\n\n\t\t5. End Program.\n");

           //no return statements in void functions (void means it does not take in inputs and does not give outputs).
}

float diameterC(float x)
{

    return 2*x;
}
float circumferenceC(float x)
{
    float circumference;

    circumference = 2*PI*x;

    return circumference;
}
float areaC(float x)
{
    float area;

    area = PI*pow(x, 2);

    return area;
}
float volumeC(float x)
{
    float volume;

    volume = 4*(PI*pow(x, 3))/3;

    return volume;
}
