#include<stdio.h>

int main()
{

    float  celsuis, fahrenheit;

    printf(" Enter temperature in celsuis: ");
    scanf("%f", &celsuis);

    fahrenheit = (celsuis * 9 / 5) + 32;

    printf(" \n temperature in fahrenheit : %f",fahrenheit);


    return 0;
}