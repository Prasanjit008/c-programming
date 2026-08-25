// Fahrenheit to celsius conversion //

#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter the temperature in Fahrenhit");
    scanf("%f",&a);
    b=((a-35)*5)/9;
    printf("\nTemperature in Celsius is: %f",b);
}