#include<stdio.h>

int main()

{
   float angle1 ,angle2 ,angle3;
   printf("Enter the measure of frist angle :");
   scanf("%f , &angle1");

   printf("Enter the measure of second angle :");
   scanf("%f , &angle2");

   angle3 = 180 - (angle1 + angle2);

    printf("The measure of a third angle is : %.2f degrees",angle3);  
    return 0;
}