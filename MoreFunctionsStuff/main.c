#include <stdio.h>
#include <stdlib.h>
#include "RoundFloats.h"

int main()
{
    float value,
          result;
    int category,
        counter;
    printf("\t\t\t\t\t\tPro Rounding Tool.\n");
    menu();

    //counter = 6;
    do
       {
            printf("\n\n>>>");
            scanf("%d", &category);
            switch(category)
            {

           case 1:  printf("\n\n\tEnter positive number: ");
                    scanf("%f", &value);

                    if( value > 0)
                      {
                        result = roundToInteger(value);
                        printf("\n\t%f => %f\n", value, result);
                        break;
                      }
                      else
                      {
                          printf("\n\t\t\aERROR: value most be higher than 1.\n");
                      }

            case 2 : printf("\n\n\tEnter positive number: ");
                     scanf("%f", &value);

                     result = roundToTenth(value);
                     printf("\n\t%f => %f\n", value, result);
                     break;

            case 3:  printf("\n\n\tEnter positive number: ");
                     scanf("%f", &value);

                     result = roundToHundredth(value);
                     printf("\n\t%f => %f\n", value, result);
                     break;

            case 4: printf("\n\n\tEnter positive number: ");
                    scanf("%f", &value);

                    result = roundToThousandth(value);
                    printf("\n\t%f => %f\n", value, result);
                    break;

            default : printf("\n\n\tEnter positive number: ");
                      scanf("%f", &value);

                      result = roundToInteger(value);
                      printf("\n\t%f => %f\n", value, result);

                      result = roundToTenth(value);
                      printf("\n\n\t%f => %f\n", value, result);


                      result = roundToHundredth(value);
                      printf("\n\n\t%f => %f\n", value, result);


                      result = roundToThousandth(value);
                      printf("\n\n\t%f => %f\n", value, result);
            }

            menu();

            //fix menu -1 thing.
            //fix loop.
            //add if else for negative value error.

            printf("\n\n>>>");
            scanf("%d", &category);


       }while(category != -1);

    return 0;




}
