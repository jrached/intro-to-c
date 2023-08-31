/*Name: Juan Rached.
  Date: 07/09/19.
  Description: Program randomly generates a number and the user must guess it to win.
               Program uses two do-while loops and a cascaded if-else statement to achieve this.
               Additionally the random value varies with time due to the srand(time(NULL)) function.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,
        check,
        guess;

    check = 0;
    srand(time(NULL));

    printf("\t\t\t\t\t     Guess The Number Game.");
        do
        {
            number = rand()%1000 + 1;
            printf("\n\n\n   Guess the randomly generated number (1-1000).");

            do
            {
                printf("\n\n\n\tEnter Guess: ");
                scanf("\n\n\t%d", &guess);

                if(guess == number)
                {
                    printf("\n\n\t\t\t\t   Congratulations! You guessed the number!!!\n");
                }
                else
                {
                    if(guess > number)
                    {
                        printf("\n\tOops! You guessed too high.");

                    }
                    else
                    {
                        printf("\n\tOops! You guessed too low");
                    }

                }


            }while(number != guess);

            printf("\n\n   Do you wanna play again?(For ""no"" type 1)");
            scanf("%d", &check);

        }while(check != 1);


    return 0;
}

