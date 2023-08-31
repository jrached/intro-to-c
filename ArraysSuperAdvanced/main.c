#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4


void inputArrayValues(int userArray[][COL]);
void printArrayValues(int a[][COL]);
void addArrayValues(int A[][COL], int B[][COL], int C[][COL]);

int main()
{


  int a[ROW][COL],
      b[ROW][COL],
      c[ROW][COL];


      //Entering storing values in arrays a and b.
      inputArrayValues(a);
      inputArrayValues(b);

      printf("\n--------------------A-------------------------\n");
      printArrayValues(a);
      printf("\n--------------------B--------------------------\n");
      printArrayValues(b);
      printf("\n------------------A + B------------------------\n");
      addArrayValues(a, b, c);
      printArrayValues(c);



    return 0;
}


//This function asks the user for values to be stored in the array.
void inputArrayValues(int userArray[][COL])
{
    int i, j;

    printf("\n\tEnter %d value to be stored in the array.\n\n>>", COL*ROW);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d ", &userArray[i][j]);
        }
    }
}

//Print the contents of an array.
void printArrayValues(int A[][COL])
{
    int i, j;

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

// computes the sum of two arrays element by element.
//and stores the result in a third array.
void addArrayValues(int A[][COL], int B[][COL], int C[][COL])
{
    int i, j;

    for( i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
