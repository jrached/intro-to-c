#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int   count,
          repeat,
          option;
    float radius,
          diameter,
          circumference,
          area,
          volume,
          PI=3.141593;

    printf("                             Rached's Calculator 3000");

  repeat = 0;

  while( repeat < 5)
  {
          printf("\n\n Enter the value of your radius ");
          printf("(%d ", repeat + 1);
          printf("of 5 attempts):");
          scanf("%f", &radius);

       if( radius > 0)
       {


            printf("\n   1)Diameter of Circle.  2)Circumference of Circle.  3)Area of circle.  4)Volume of Sphere.");
            printf("   \n\n Choose what to calculate from the options above: ");
            scanf("\n%d", &option);

            switch(option)
            {
                case 1 : diameter = 2*radius;

                         printf("\n   Diameter is: ");
                         printf("%f\n\n\n", diameter);
                break;

                case 2 : circumference = 2*PI*radius;

                         printf("\n   Circumference is: ");
                         printf("%f\n\n\n", circumference);
                break;

                case 3 : area = PI*pow(radius, 2);

                         printf("\n   Area is: ");
                         printf("%f\n\n\n", area);
                break;

                case 4 : volume = (4*PI*pow(radius, 3))/3;

                         printf("\n   Volume is: ");
                         printf("%f\n\n\n", volume);
                break;

                default : printf("\n\n\a   ERROR: You entered an invalid value.\n\n\n\n");

            }




        }
        else
        {
            printf("\n\n\a ERROR: radius must be larger than zero.\n\n");
        }


      repeat = 1 + repeat;


  }


    printf("\n                                Program terminated.\n\n\n");

    return 0;
}
