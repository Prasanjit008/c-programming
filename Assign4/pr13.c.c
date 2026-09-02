#include <stdio.h>

void main()
{
    float a, b, c;

    printf("Enter the three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("The sides form a valid triangle.");
    }
    else
    {
        printf("The sides do not form a valid triangle.");
    }

}