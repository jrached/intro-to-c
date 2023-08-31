#ifndef PROJECTFUNCTIONS_H_INCLUDED
#define PROJECTFUNCTIONS_H_INCLUDED



#endif // PROJECTFUNCTIONS_H_INCLUDED

//Displays user input
void userInput(int menuInput);


//All of the following functions are menus.
void menu(void);
void subMenu1(void);
void subMenu2(void);

//All of the following functions calculate perimeter.
float sqrPerimeter(float length);
float rctPerimeter(float length, float width);
float trgPerimeter(float side1, float side2, float side3);
float crlPerimeter(float radius);

//All of the following functions calculate area.
float sqrArea(float length);
float rctArea(float length, float width);
float trgArea(float side1, float side2, float side3);
float crlArea(float radius);

//All of the following functions calculate volume.
float cubVolume(float length);
float prsmVolume(float length, float width, float height);
float pyrmVolume(float side1, float side2, float side3, float height);
float sphrVolume(float radius);
