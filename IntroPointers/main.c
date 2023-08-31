#include <stdio.h>
#include <stdlib.h>

int main()
{

    float value = 23.67;

    float *ptrValue = &value;

    float *newPtr;

    printf("Value = %f\n\n", value);

    printf("Address of value = %d\n\n", &value);  //Memory addresses are always integers.

    printf("De-reference pointer value: %f\n\n", *ptrValue);

    *ptrValue = 89;
    printf("Value = %f\n\n", value);

    *ptrValue = *ptrValue*2;
    printf("value = %f\n\n", value);

    newPtr = &value;
    printf("*newPtr = %f\n\n", *newPtr);

    return 0;
}
