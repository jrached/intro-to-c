#define PI 3.141593



//Displays user input.
void userInput(int menuInput)
{
        printf("\n\n\tYour Choice: %d", menuInput);        //The default from the switch statement already notifies the user
}                                                          //if he entered an invalid value from the menu so it is not done in this function.



void menu(void)
{
    printf("\n\n\n\tEnter the number of the calculation you wish to perform." //Menu with possible calculations to perform.
           "\n\n\t\t\t1) Perimeter."
           "\n\t\t\t2) Area."
           "\n\t\t\t3) Volume."
           "\n\n\t\t\t>>");
}

void subMenu1(void)
{
    printf("\n\n\n\tEnter the geometrical figure you wish to work with."  //Menu with 2 dimensional figures.
           "\n\n\t\t\t1) Square."
           "\n\t\t\t2) Rectangle."
           "\n\t\t\t3) Triangle."
           "\n\t\t\t4) Circle.");
}

void subMenu2(void)
{
     printf("\n\n\n\tEnter the geometrical figure you wish to work with."  //Menu with 3 dimensional figures.
           "\n\n\t\t\t1) Cube."
           "\n\t\t\t2) Rectangular Prism."
           "\n\t\t\t3) Pyramid."
           "\n\t\t\t4) Sphere.");
}


//All of the following functions calculate perimeter.
float sqrPerimeter(float length)                              //For square.
{
    return 4*length;
}

float rctPerimeter(float length, float width)                 //For rectangle.
{
    return 2*length + 2*width;
}

float trgPerimeter(float side1, float side2, float side3)     //For triangle.
{
    return side1 + side2 + side3;
}

float crlPerimeter(float radius)                              //For circle.
{
    return 2*PI*radius;
}


//All of the following functions calculate area.
float sqrArea(float length)                                  //For square.
{
    return length*length;
}

float rctArea(float length, float width)                    //For rectangle.
{
    return length*width;
}

float trgArea(float side1, float side2, float side3)        //For triangle.
{
    float semiPerimeter, areaTriangle;

    semiPerimeter = (side1 + side2 + side3)/2;

    areaTriangle = pow(semiPerimeter*(semiPerimeter - side1)*(semiPerimeter - side2)*(semiPerimeter - side3), 0.5);

    return areaTriangle;
}

float crlArea(float radius)                                //For circle.
{
    return PI*pow(radius, 2);
}


//All of the following functions calculate volume.
float cubVolume(float length)                                                //For cube.
{
    return pow(length, 3);
}

float prsmVolume(float length, float width, float height)                   //For rectangular prism.
{
    return length*width*height;
}

float pyrmVolume(float side1, float side2, float side3, float height)      //For triangular pyramid.
{
    float semiPerimeter, areaBase;

    semiPerimeter = (side1 + side2 + side3)/2;

    areaBase = pow(semiPerimeter*(semiPerimeter - side1)*(semiPerimeter - side2)*(semiPerimeter - side3), 0.5);

    return (areaBase*height)/3;
}

float sphrVolume(float radius)                                            //For sphere.
{
    return (4*PI*pow(radius, 3))/3;
}

