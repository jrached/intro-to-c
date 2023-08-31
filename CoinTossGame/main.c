#include <stdio.h>
#include <stdlib.h>

int main()
{
    int match, guess, randvalue, a, o, e, i;
    a = 0;
    e = 0;
    o = 0;

    printf("\t\t\t\t\t\tCoin Toss Simulator!");
    printf("\n\n Enter 1 for heads and 0 for tails");

    srand(time(NULL));

    for(i= 0; i < 10; i++)
     {

            printf("\n\n\tHeads or Tails? ");
            scanf("%d", &guess);
            printf("\n\tToss number %d: ", i + 1);

            randvalue =  flip();
            match = randvalue - guess;

            switch(randvalue)
            {

                   case 0:  printf("Tails.\n");
                            o++;
                            break;

                   case 1:  printf("Heads.\n");
                            e++;
                            break;
            }

            switch(match)
            {
                case 0: a++;
                        break;

            }

     }

    printf("\n\n\n\t\t\tAmount of Heads: %d", e);
    printf("\t\t\tAmount of Tails: %d", o);
    printf("\n\n\t\t\t\t\t     RightAnswers: %d\n", a);

    return 0;
}

