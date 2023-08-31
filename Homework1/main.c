/* Name: Juan Rached
   Date: 05/23/19
   Description: Created a program that allows the user to know the dimensions of any sphere just by knowing its radius.
   This includes the 12cm radius prompted in the question. the units are at the discretion of the user.
   The program is made so that the user can only input natural values for the radius (radius > 0).
   If a negative number is chosen, a bell will ring ( which is my favorite part) and an error will pop up.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float diameter,
         circumference,
         area,
         volume,
         radius,
         PI = 3.141593;

   printf("                             Welcome to Rached's Sphere Dimension Calculator 3000!");
   printf("\n\nEnter the radius of your sphere:");
   scanf("%f", &radius);

   if( radius > 0)
   {
       diameter = 2*radius;
       circumference = 2*PI*radius;
       area = PI*pow(radius, 2);
       volume = (4/3)*PI*pow(radius, 3);
       printf("\n\nHere are the dimensions of your sphere:");
       printf("\n\n   The diameter is: ");
       printf("%f", diameter);
       printf("\n\n   The area is: ");
       printf("%f", area);
       printf("\n\n   The circumference is: ");
       printf("%f", circumference);
       printf("\n\n   The volume is: ");
       printf("%f\n\n", volume);


   }
   else
   {
       printf("\n\n\a   Error: The radius must be greater than zero\n\n");
   }








    return 0;
}
