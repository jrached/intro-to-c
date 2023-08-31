#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[100];
    int i, sum = 0;
    int counts[10] = {0};

    float average;

    for(i = 0; i < 100; i++)
    {
        values[i] = rand()%10 + 1;

        sum = values[1] + sum;

       /* switch(value[counter])
        {
            case 1: counter2[0]++;
            break;

            case 2: counter2[1]++;
            break;

            case 3: counter2[2]++;
            break;

            case 4: counter2[3]++;
            break;

            case 5: counter2[4]++;
            break;

            case 6: counter2[5]++;
            break;

            case 7: counter2[6]++;
            break;

            case 8: counter2[7]++;
            break;

            case 9: counter2[8]++;
            break;

            case 10: counter2[9]++;
            break;
        }
         this can all be done with one line of code.
         that line is the following:

         counts[values(i) - 1]++;
*/

         counts[values[i] - 1]++;

    }

      for( i = 0; i  < 10; i++)
           {
                printf("\n\n\t Number %d : %d", i + 1, counts[i]);
           }



    return 0;
}
