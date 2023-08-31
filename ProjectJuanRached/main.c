/*    Name: Juan Rached.
      Date: 07/28/2019.
      Description: Project uses various for loops, switch statements, if statements, and user defined functions to transport
      users between a menu and three different sub-menus that allow the user to request for the dimensions (perimeter, area, or volume)
      of a specific geometric figure (square, rectangle, triangle, or circle).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ProjectFunctions.h"
#define PI 3.141593


int main()
{
    int i, menuInput;
    float length, width, side1, side2, side3, radius, height;
    float squarePerimeter, rectanglePerimeter, trianglePerimeter, circlePerimeter;
    float squareArea, rectangleArea, triangleArea, circleArea;
    float cubeVolume, prismVolume, pyramidVolume, sphereVolume;

    printf("\t\t\t\t\t\tGeometric Calculator");
    printf("\n\n\tFollow the menu instructions to calculate the dimensions of the geometric figure you prefer."
           "\n   The program works in meters so all calculations will be performed with meters as the unit of input and output.");


    for(i = 1; i != 0;)
    {
        menu(); //Menu prompts three choices to user. 1)Perimeter 2)Area 3)Volume.

        scanf("%d", &menuInput); //Scans for user input from menu.
        userInput(menuInput);

        switch(menuInput) //Input is used for the switch statement leading to one of the two sub-menus.
        {
            case 1 :   for(i = 1; i != 0;)
                        {
                             subMenu1();               //Case 1 calculates perimeter of either 1)Square 2)Rectangle 3)Triangle 4)Circle prompted by subMenu1().
                             printf("\n\n\t\t\t>>");
                             scanf("%d", &menuInput);  //Scans for user input from subMen1.
                             userInput(menuInput);

                             switch(menuInput) //Input is used for switch statement to measure the perimeter of either four of the geometric figures.
                             {
                                case 1:  printf("\n\n\tEnter Side Length: ");          //Case 1 calculates perimeter of square.
                                         scanf("%f", &length);
                                         if(length > 0)                                //If statement makes sure the user knows length must be positive.
                                         {
                                            squarePerimeter = sqrPerimeter(length);
                                            printf("\n\n\tSquare Perimeter: %0.2f m", squarePerimeter);
                                         }
                                         else
                                         {
                                             printf("\n\n\t\t\t\t\aERROR: Length must be larger than zero.");
                                         }
                                         break;

                                case 2:  printf("\n\n\tEnter Length: ");          //Case 2 calculates perimeter of rectangle.
                                         scanf("%f", &length);
                                         printf("\n\n\tEnter Width: ");
                                         scanf("%f", &width);
                                         if(length > 0 && width > 0)                   //If statement notifies the user that length or width cant be negative.
                                         {
                                            rectanglePerimeter = rctPerimeter( length, width);
                                            printf("\n\n\tRectangle Perimeter: %0.2f m", rectanglePerimeter);
                                         }
                                         else
                                         {
                                             printf("\n\n\t\t\t\t\aERROR: Length and width must be larger than zero.");
                                         }
                                         break;

                                case 3:  printf("\n\n\tEnter first Side Length: ");    //Case 3 calculates perimeter of triangle.
                                         scanf("%f", &side1);
                                         printf("\n\n\tEnter second Side Length: ");
                                         scanf("%f", &side2);
                                         printf("\n\n\tEnter third Side Length: ");
                                         scanf("%f", &side3);
                                         if(side1 <= 0 || side2 <= 0 || side3 <= 0)           //If statement notifies the user that no side can be negative.
                                         {
                                            printf("\n\n\t\t\t\t\aERROR: All side lengths must be larger than zero.");
                                         }
                                         else
                                         {
                                            if(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) //if statement makes sure the perimeter
                                            {                                                                              //of the triangle makes physical sense.
                                                printf("\n\n\t\t\aERROR: The largest of the three sides"
                                                       " must be smaller than the sum of the two smallest sides.");
                                            }
                                            else
                                            {
                                                trianglePerimeter = trgPerimeter(side1, side2, side3);
                                                printf("\n\n\tTriangle Perimeter: %0.2f m", trianglePerimeter);
                                            }
                                         }
                                     break;

                                case 4:  printf("\n\n\tEnter radius: ");              //Case 4 calculates perimeter of circle.
                                         scanf("%f", &radius);
                                         if(radius > 0)                               //If statement notifies user that radius cant be negative.
                                         {
                                            circlePerimeter = crlPerimeter(radius);
                                            printf("\n\n\tCircle Perimeter: %0.2f m", circlePerimeter);
                                         }
                                         else
                                         {
                                             printf("\n\n\t\t\t\t\aERROR: Radius must be larger than zero.");
                                         }
                                         break;

                                default : printf("\n\n\t\t\t\t\aERROR: Entered invalid value from menu.");  //Error notifies user if an invalid value
                             }                                                                            //was entered from the menu.

                         printf("\n\n\n\t\t\tWould you like to perform another perimeter calculation(yes 1 no 0)? ");
                         scanf("%d", &i);
                     }
                     break;

            case 2: for(i = 1; i != 0;)
                    {
                            subMenu1();               //Case 2 calculates the area of either 1)Square 2)Rectangle 3)Triangle 4)Circle prompted by subMenu1().                                                        //
                            printf("\n\n\t\t\t>>");
                            scanf("%d", &menuInput);  //Scans user input from sub-menu.
                            userInput(menuInput);

                            switch(menuInput)         //Takes user input for switch statement.
                            {
                                case 1:  printf("\n\n\tEnter Side Length: ");          //Case 1 calculates area of square.
                                         scanf("%f", &length);
                                         if(length > 0)                                //If statement makes sure the user knows length must be positive.
                                         {
                                            squareArea = sqrArea(length);
                                            printf("\n\n\tSquare Area: %0.2f m^2", squareArea);
                                         }
                                         else
                                         {
                                             printf("\n\n\t\t\t\t\aERROR: Length must be larger than zero.");
                                         }
                                         break;

                                case 2:  printf("\n\n\tEnter Length: ");   //Case 2 calculates area of rectangle.
                                         scanf("%f", &length);
                                         printf("\n\n\tEnter Width: ");
                                         scanf("%f", &width);
                                         if(length > 0 && width > 0 && height > 0)  //If statement notifies the user that neither length nor width can be negative.
                                         {
                                            rectangleArea = rctArea(length, width);
                                            printf("\n\n\tRectangle Area: %0.2f m^2", rectangleArea);
                                         }
                                         else
                                         {
                                             printf("\n\n\t\t\t\t\aERROR: Length, width, and height must be larger than zero.");
                                         }
                                         break;

                                case 3:  printf("\n\n\tEnter first Side Length: ");    //Case 3 calculates area of triangle.
                                         scanf("%f", &side1);
                                         printf("\n\n\tEnter second Side Length: ");
                                         scanf("%f", &side2);
                                         printf("\n\n\tEnter third Side Length: ");
                                         scanf("%f", &side3);
                                         if(side1 <= 0 || side2 <= 0 || side3 <= 0)  //If statement notifies the user that no side can be negative.
                                         {
                                            printf("\n\n\t\t\t\t\aERROR: All side lengths must be larger than zero.");
                                         }
                                         else
                                         {
                                            if(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) //if statement makes sure the perimeter
                                            {                                                                              //of the triangle makes physical sense.
                                                printf("\n\n\t\t\aERROR: The largest of the three sides"
                                                       " must be smaller than the sum of the two smallest sides.");
                                            }
                                            else
                                            {
                                                triangleArea = trgArea(side1, side2, side3);
                                                printf("\n\n\tTriangle Area: %0.2f m^2", triangleArea);
                                            }
                                         }
                                         break;

                                case 4:  printf("\n\n\tEnter radius: ");              //Case 4 calculates area of circle.
                                         scanf("%f", &radius);
                                         if(radius > 0)                               //If statement notifies user that radius cant be negative.
                                         {
                                            circleArea = crlArea(radius);
                                            printf("\n\n\tCircle Area: %0.2f m^2", circleArea);
                                         }
                                         else
                                         {
                                             printf("\n\n\t\t\t\t\aERROR: Radius must be larger than zero.");
                                         }
                                         break;

                                default : printf("\n\n\t\t\t\t\aERROR: Entered invalid value from menu."); //Error notifies user if an invalid value
                                                                                                         //was entered from the menu.
                            }

                        printf("\n\n\n\t\t\tWould you like to perform another area calculation(yes 1 no 0)? ");
                        scanf("%d", &i);
                    }
                    break;

            case 3: for(i = 1; i != 0;)
                    {
                            subMenu2();
                            printf("\n\n\t\t\t>>");
                            scanf("%d", &menuInput);
                            userInput(menuInput);

                            switch(menuInput)
                            {
                                 case 1: printf("\n\n\tEnter Side Length: ");          //Case 1 calculates volume of cube.
                                         scanf("%f", &length);
                                         if(length > 0)                                //If statement makes sure the user knows length must be positive.
                                         {
                                            cubeVolume = cubVolume(length);
                                            printf("\n\n\tCube Volume: %0.2f m^3", cubeVolume);
                                         }
                                         else
                                         {
                                             printf("\n\n\t\t\t\t\aERROR: Length must be larger than zero.");
                                         }
                                         break;

                                case 2:  printf("\n\n\tEnter Length: ");          //Case 2 calculates volume of rectangular prism.
                                         scanf("%f", &length);
                                         printf("\n\n\tEnter Width: ");
                                         scanf("%f", &width);
                                         printf("\n\n\tEnter Height: ");
                                         scanf("%f", &height);
                                         if(length > 0 && width > 0 && height > 0)  //If statement notifies the user that neither length, height, nor width can be negative.
                                         {
                                            prismVolume = prsmVolume(length, width, height);
                                            printf("\n\n\tRectangular Prism Volume: %0.2f m^3", prismVolume);
                                         }
                                         else
                                         {
                                             printf("\n\n\t\t\t\t\aERROR: Length, width, and height must be larger than zero.");
                                         }
                                         break;

                                case 3:  printf("\n\n\tEnter first Side Length: ");    //Case 3 calculates volume of triangular pyramid.
                                         scanf("%f", &side1);
                                         printf("\n\n\tEnter second Side Length: ");
                                         scanf("%f", &side2);
                                         printf("\n\n\tEnter third Side Length: ");
                                         scanf("%f", &side3);
                                         printf("\n\n\tEnter Height: ");
                                         scanf("%f", &height);
                                         if(side1 <= 0 || side2 <= 0 || side3 <= 0 || height <= 0) //If statement notifies the user that no side can be negative.
                                         {
                                            printf("\n\n\t\t\t\t\aERROR: Height and all side lengths must be larger than zero.");
                                         }
                                         else
                                         {
                                            if(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) //if statement makes sure the volume
                                            {                                                                              //of the triangle makes physical sense.
                                                printf("\n\n\t\t\aERROR: The largest of the three sides"
                                                       " must be smaller than the sum of the two smallest sides.");
                                            }
                                            else
                                            {
                                                pyramidVolume = pyrmVolume(side1, side2, side3, height);
                                                printf("\n\n\tTriangular Pyramid volume: %0.2f m^3", pyramidVolume);
                                            }
                                         }
                                         break;

                                case 4:  printf("\n\n\tEnter radius: ");              //Case 4 calculates volume of sphere.
                                         scanf("%f", &radius);
                                         if(radius > 0)                               //If statement notifies user that radius cant be negative.
                                         {
                                            sphereVolume = sphrVolume(radius);
                                            printf("\n\n\tSphere Volume: %0.2f m^3", sphereVolume);
                                         }
                                         else
                                         {
                                             printf("\n\n\t\t\t\t\aERROR: Radius must be larger than zero.");
                                         }
                                         break;

                                default : printf("\n\n\t\t\t\t\aERROR: Entered invalid value from menu."); //Error notifies user if an invalid value
                            }                                                                            //was entered from the menu.

                         printf("\n\n\n\t\t\tWould you like to perform another volume calculation(yes 1 no 0)? ");
                         scanf("%d", &i);
                    }
                    break;

            default : printf("\n\n\t\t\t\t\aERROR: Entered invalid value from menu.");//Error notifies user if an invalid value
                                                                                    //was entered from the menu.
        }

        printf("\n\n\n\t\t\tWould you like to return to the main menu (yes 1 no 0)? ");
        scanf("%d", &i);
    }

    printf("\n\n\t\t\t\t\t   Program Terminated.\n");

    return 0;
}
