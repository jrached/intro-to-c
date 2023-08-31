#include <stdio.h>
#include <stdlib.h>
#define ROW 5
#define COL 5

int main()
{
   int i,
       j,
       idMaatrix[5][5] = {0};
       FILE *idMatrix;

       idMatrix = fopen("idMatrix.txt", "w");

        idMaatrix[0][0] = 1;
        idMaatrix[1][1] = 1;
        idMaatrix[2][2] = 1;
        idMaatrix[3][3] = 1;
        idMaatrix[4][4] = 1;
        idMaatrix[5][5] = 1;

       for(i = 0; i < ROW; i++)
       {
           for(j = 0; j < COL; j++)
           {
               printf(" %d", idMaatrix[i][j]);
               fprintf(idMatrix, " %d", idMaatrix[i][j]);
           }

           printf("\n");
           fprintf(idMatrix, "\n");
       }

       if(idMatrix == NULL)
       {
           printf("\n\n\t\t\t\aERROR: File could not open.\n");

           return -1;
       }

       fclose(idMatrix);


    return 0;
}
