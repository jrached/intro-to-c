#include <stdio.h>
#include <stdlib.h>
#define ROW 20

void recordTemp(void);


int main()
{


     recordTemp();


    return 0;
}

void recordTemp(void)
{
    float
          temperature[20] = {0};

    int i;

      for(i = 0; i < ROW; i++)
    {
        scanf("%f", &temperature[i]);
    }

     for(i = 0; i < ROW; i++)
    {
        printf("%f\n", temperature[i]);
    }
}

