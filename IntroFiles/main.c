//Intro to data files.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    FILE *newFile; //* is not a multiplication sign but a pointer.

    newFile = fopen("C:/Users/aguzman3/Desktop/practice2.txt","w"); //fopen means file open.

    if(newFile = NULL)
    {
        printf("\n\n\tERROR: File could not be created.\n");
        return -1;
    }

    for(i = 0; i < 256; i++)
    {
        printf("%c ", i);
        fprintf(newFile, "%c ", i);

        if((i + 1)%5 == 0)
        {
            printf("\n");
            fprintf(newFile, "\n");
        }
    }


    return 0;
}
