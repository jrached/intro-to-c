#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CoinToss.h"

//srand(time(NULL) function works with the rand() function to completely randomize the numbers. You must use them together for it to work.
// randValue = rand();  quasi random.





int main()
{

    int randvalue, o, e, i;

    printf("\t\t\t\t\t\tCoin Toss Simulator!");

    srand(time(NULL));

    e = 0;
    o = 0;
    for(i= 0; i < 100; i++)
     {


        printf("\n\n\tToss number %d: ", i + 1);

        randvalue =  flip();

        switch(randvalue)
        {

               case 0:  printf("Tails.\n");
                        o++;
                        break;

               case 1:  printf("Heads.\n");
                        e++;
                        break;
        }


     }

    printf("\n\n\n\t\t\tAmount of Heads: %d", e);
    printf("\t\t\tAmount of Tails: %d\n", o);




    return 0;
}


