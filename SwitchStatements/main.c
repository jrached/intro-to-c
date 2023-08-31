#include <stdio.h>
#include <stdlib.h>

int main()
{


    int category;

    printf("\n   Enter a value 1-4 to view student's rank.");
    scanf("%d", &category);

    switch(category)
    {
        case 1: printf("\n\n Student is a freshman.\n\n");
        break;

        case 2: printf("\n\n Student is a sophomore.\n\n");
        break;

        case 3: printf("\n\n Student is a junior.\n\n");
        break;

        case 4: printf("\n\n Student is a senior.\n\n");
        break;

        default : printf("\n\n You entered an invalid value.\n\n");
    }

    printf("\n\n   End of program.\n\n");


    return 0;
}
