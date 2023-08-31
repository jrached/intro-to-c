#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,
          b,
          c,
          x1,
          x2;


    printf("               Quadratic Equation Calculator");
    printf("\n\n Enter your coefficients");
    printf("\n\n   Value of a:");
    scanf("%f", &a);
    printf("\n\n   Value of b:");
    scanf("%f", &b);
    printf("\n\n   Value of c:");
    scanf("%f", &c);

    if(a>0 && pow(b,2) >= 4*a*c)
    {


        x1 = (-b - pow(((b*b)-4*a*c), 0.5))/(2*a);
        x2 = (-b + pow(((b*b)-4*a*c), 0.5))/(2*a);

       printf("\n\n Your values of x are,");
       printf("\n\n   X1:");
       printf("%f", x1);
       printf("\n\n   X2:");
       printf("%f\n\n", x2);
    }
    else
    {
        printf("\n\n\aError: Two conditions must be met for the equation to work,");
        printf("\n a must be greater than zero and the square root cannot be negative. \n\n");
    }




    return 0;
}
