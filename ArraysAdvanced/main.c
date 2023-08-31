#include <stdio.h>
#include <stdlib.h>
#define ROW 5
#define COL 3

int main()
{
/*
  int avgRainFall[ROW][COL];
  int i,
      j;

  avgRainFall[1][0] = 1;
  avgRainFall[0][1] = 1;
  avgRainFall[0][2] = 2;
  avgRainFall[2][0] = 2;
  avgRainFall[2][1] = 3;
  avgRainFall[2][2] = 3;

  for(i = 0; i < ROW; i++)
  {
      for(j = 0; j < COL; j++)
      {
          printf("%d ", avgRainFall[i][j]);
      }

      printf("\n\n");
  }







//when the values of the array are known right away ( whatever the fuck that means).



float speeds[2][3] = {{1.2, 3.4, 6.7},
                      {8.9, 10.1, 5.6}};


   for( j = 0; j < 3; j++)
   {
       for(i = 0; i < 2; i++)
       {
           printf("%.1 f", speeds);
       }

       printf("\n\n");
   }

   //Storing random values in an array.

   int randVal[ROW][COL];

   for(j = 0; j < COL; j++)
   {
       for(i = 0; i < ROW; i++)
       {
           randVal[i][j] = rand()%10 + 1;
           printf("%d ", randVal[i][j]);
       }
   }

   */
   //Partial initialization of an array.

   float averages[ROW][COL] = {{1.5, 3.4},
                               {4},
                               {1.2, 3.5, 6},
                               {6, 7.8}};
   int i, j;

   printf("\n--------------------------------------------\n");
   for(i = 0; i < ROW; i++)
   {
       for(j = 0; j < COL; j++)
       {
           printf("%.1f ", averages[i][j]);
       }

       printf("\n\n");
   }




    return 0;
}
