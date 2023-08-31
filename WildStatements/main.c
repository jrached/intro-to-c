#include <stdio.h>
#include <stdlib.h>
/* While statements are repetition structures


*/


int main()
{

    //all repetitions need a control variable.
    //counter is such variable.


    int counter;

    counter = 1;

    while( counter <= 10)
    {
        printf("\n\n               Counter = %d\n", counter);
        counter = counter + 2;
    }



    return 0;
}
