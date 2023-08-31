#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


     float a,
         b,
         c,
         x1,
         realpart,
         imaginarypart,
         x2;


     printf("                 Quadratic Formula Calculator");
     printf("\n\n   Enter the values of the coefficients,");
     printf("\n\n Value of a:");
     scanf("%f", &a);
     printf("\n\n Value of b:");
     scanf("%f", &b);
     printf("\n\n Value of c:");
     scanf("%f", &c);

     if( a != 0 )
     {
         if(b*b >= 4*a*c)
         {
             x1 = (-b + pow(b*b-4*a*c, 0.5))/(2*a);
             x2 = (-b - pow(b*b-4*a*c, 0.5))/(2*a);

             printf("\n\n   The solutions for the polynomial with the given coefficients are,");
             printf("\n\n X1 = ");
             printf("%f", x1);
             printf("\n\n X2 = ");
             printf("%f\n\n", x2);
         }
         else
         {
             printf("\n\n   Imaginary solutions,");

             realpart = -b/(2*a);
             imaginarypart = sqrtf(abs(b*b - 4*a*c))/(2*a);

             printf("\n\n X1 = ");
             printf("%f", realpart);
             printf(" + ");
             printf("%f", imaginarypart);
             printf("i");

             printf("\n\n X2 = ");
             printf("%f", realpart);
             printf(" - ");
             printf("%f", imaginarypart);
             printf("i\n\n");


         }
     }
     else
     {
         printf("\n\n\a   Error: a cannot equal zero.\n\n");
     }







    return 0;
}
