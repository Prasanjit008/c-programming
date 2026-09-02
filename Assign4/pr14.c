// root of a quadratric equation //

#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, d, r1, r2;

    printf("Enter the coefficient values a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Distinct real roots\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }
    else 
    {
        if (d == 0)
        {
        r1 = -b / (2 * a);

        printf("Real roots\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r1);
        }
         else
        {
        printf("Imaginary roots");
        }
    
    }
   
}