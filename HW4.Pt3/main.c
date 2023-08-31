#include <stdio.h>
#include <stdlib.h>

int main()
{
    float increment,
          rankin,
          celsius;
    int   counter;

    printf("\t\t\tCelsius to Rankin Conversion Table");

    for( counter = 5; counter > 0; counter--)
    {
        printf("\n\n   You have %d more attempt(s) before the program ends."
               "\n   Enter values for celsius and its increment in the table respectively: ", counter - 1);
        scanf("%f\t%f", &celsius, &increment);

        if(celsius >= -273.15 && increment > 0 && celsius <= 100)
        {
            printf("\n\t\tCelsius\t\t\t\t\tRankin");

                for(celsius = celsius; celsius <= 100; celsius = celsius + increment)
                {
                    rankin = 9*(celsius + 273.15)/5;

                    printf("\n\n\t\t%f\t\t\t\t%f\n", celsius, rankin);

                }
        }
        else
        {
            printf("\n\a\tERROR: The value of celsius must be in between -273.15 and 100 while the increment must be higher than zero.");
        }

    }

    printf("\n\t\t\t\tProgram Terminated.\n");

    return 0;
}
