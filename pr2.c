#include<stdio.h>
int main()
{

    float  celsuis, fahrenheit;

    printf(" temperature in c: ");
    scanf("%f", &celsuis);

    fahrenheit = (celsuis * 9 / 5) + 32;

    printf(" \n %.2f celsius is equal to %.2f fahrenheit",celsuis, fahrenheit);
    return 0;
}