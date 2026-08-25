// celsius  to Fahrenheit conversion //

#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&a);
    b=(a*(9.0/5.0))+32;
    printf("\nTemperature in Celsius is: %f",b);
}