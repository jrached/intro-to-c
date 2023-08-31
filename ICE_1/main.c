#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593
#define ROW 20

int main()
{
    int   i,
          j,
          speed[20] = {0};
    float diameter,
          velocity;

    printf("\t\t\t\t\tAngular Velocity Calculator");

    do
    {
        printf("\n\n   Enter diameter of propeller: ");
        scanf("%f", &diameter);

        if(diameter > 0)
        {
           printf("\n\n\t\t\tPropeller Speed\t\t\tPropeller AngularVelocity.\n\n");

            for(i = 0; i < ROW; i++)
            {
                speed[i] = 50*(i + 1);

                printf("\t\t\t\t%d rpm  ", speed[i]);

                velocity = (PI*speed[i]*diameter)/60;

                printf("\t\t\t%f f/s", velocity);

                printf("\n");
            }
        }
        else
        {
            printf("\n\n\t\t\aERROR: Diameter must be larger than zero.");
        }

    printf("\n\n\t\t\t\t\tEnd Program?(Yes= -1   No = 1): ");
    scanf("%d", &i);

    }while(i != -1);

    printf("\n\n\t\t\t\t\t\tEnd Of Program.\n");

    return 0;
}
