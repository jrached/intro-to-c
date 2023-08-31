#include <stdio.h>
#include <stdlib.h>

int main()
{

  /* "Do while" lets the code run at least once regardless of the condition.
        This is because the condition is at the bottom and the statement at the top.
        It is sort of a flipped "while" statement.
  */
   int i = 1;

   do
   {
       printf("i = %d\n", i);
       i++;

    }  while(i<=10);

    printf("\n\n\n");

    //------ The "For" repetition statement.
    //Conditions must be laid out in that specific order in the parenthesis.
    //Any kind of statement can also go inside the "For" statement.
    for( i = 1; i <= 10; i++)
    {
        printf("i = %d\n", i);
    }


    return 0;
}
