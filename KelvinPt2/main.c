#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  fahrenheit,
         increment;

    float kelvin;



    printf("Enter an increment for the fahrenheit values: ");
    scanf(" %f", &increment);


    if( increment > 0 && increment <= 200 )
    {
        for( fahrenheit = 0; fahrenheit <= 200; fahrenheit = fahrenheit + increment)
           {


            kelvin = 5*(fahrenheit - 32)/9 + 273.15;

            printf("\n\n Fahrenheit            Kelvin");
            printf("\n\n %f                    %f\n", fahrenheit, kelvin);


             }
    }
     else
    {
        printf("\n\n\a   ERROR: Increment value must be higher than zero and lower than 200.\n");
    }

    printf("\n         Program terminated.\n");

    return 0;
}
