/*
    Name: Juan Rached.
    Date: 06/09/19
    Description: Program that calculates and displays income tax of user once the user enters the taxable income.
    Works only with values higher than zero; if the user enters a value lesser than or equal to zero an error warning will pop up.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float income,
          tax;

          printf("                             Tax Quantifier 3000");
          printf("\n\n   Enter taxable income: ");
          scanf("%f", &income);

    if( income <= 0)
    {
        printf("\n\n\a   Error: your income must be higher than zero.\n\n");
    }
    else
    {
        if( income < 2250)
        {
            tax = income*0.01;

            printf("\n\n Your income tax is: ");
            printf("%f\n\n", tax);
        }
        else
        {
            if( income < 5250)
            {
                tax = 37.50 + income*0.03;

                printf("\n\n Your income tax is: ");
                printf("%f\n\n", tax);
            }
            else
            {
                if( income < 10000)
                {
                    tax = income*0.05 + 142.50;

                    printf("\n\n Your income tax is: ");
                    printf("%f\n\n", tax);
                }
                else
                {
                    if( income >= 10000)
                    {
                        tax = income*0.07 + 230;

                        printf("\n\n Your income tax is: ");
                        printf("%f\n\n", tax);
                    }
                }
            }
        }
    }


    return 0;
}
