//intro to arrays.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //15 variables declared in only one line.
    int i,
        age[15];

    //index which is an integer ranges from zero to the size of the array minus one (15 - 1 = 14).
    age[0] = 98;


    float sonic[3] = {7.89, 67.2, -0.4};

    for(i = 0; i < 3; i++)
    {
        printf("\n\tSonic[%d] = %f\n", i, sonic[i]);
    }

    return 0;
}
