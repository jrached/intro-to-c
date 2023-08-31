/*
    Write a program that calculates the sum and the average of 100 random integer values in an array.
    The values range from 1 to 10. The program will also keep track of how many times each value (1-10) appears in the array.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  sum,
         counter,
         value[100];

    int  loop,
         counter2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    float average;

    sum = 0;

    printf("\n\n\tRow 1\tRow 2\tRow 3\tRow4\tRow 5");
    for(counter = 0; counter < 100; counter++)
      {
        value[counter] = rand()%10 + 1;

        printf("\n\n\tValue [%d] = %d", counter + 1, value[counter]);

        sum = value[counter] + sum;

        average = (float)sum/(counter + 1);

        switch(value[counter])
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

      }

      printf("\n\n\tSum: %d", sum);
      printf("\n\n\tAverage: %f", average);

      for(loop = 0; loop < 10; loop++)
       {
        printf("\n\n\t Number %d : %d", loop + 1, counter2[loop]);
       }


    return 0;
}
