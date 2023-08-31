#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  number,
        counter;

   counter = 1;
   printf("                 Table of 5 (from 1 to 50)\n");
   while( counter < 51)
   {
       number = counter*5;
       printf("\n\n  %d X 5 = ", counter);
       printf("%d\n", number);
       counter = counter + 1;
   }
    return 0;
}
