#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  fahrenheit,
           kelvin,
           increment;
    int counter;

    printf("\t\t\t\tFahrenheit to Kelvin Conversion Table");

    counter = 5;

    do
      {
          printf("\n\n\n\n   Enter an increment for the fahrenheit values [%d attempt(s) left before program ends]: ", counter - 1);
          scanf(" %f", &increment);

        if( increment > 0 && increment <= 200 )
        {
           printf("\n\n\t\tFahrenheit\t\t\t\t\t\tKelvin");

           fahrenheit = 0;

            do
            {
                kelvin = 5*(fahrenheit - 32)/9 + 273;

                printf("\n\n\t\t%f\t\t\t\t\t\t%f\n", fahrenheit, kelvin);

                fahrenheit = fahrenheit + increment;

            }while(fahrenheit <= 200);

        }
         else
        {
            printf("\n\a\t\tERROR: Increment value must be higher than zero and lower than 200.");
        }

        counter--;

      }while(counter > 0);

    printf("\n\n\t\t\t\t\tProgram terminated.\n");

    return 0;
}
