// Calculation of gross salary //

#include<stdio.h>

void main()
{
    float bs,gs;
    printf("Enter Basic Salary: ");
    scanf("%f",&bs);
    gs=(0.45*bs)+(0.30*bs)+bs;
    printf("\nGross Salary Is: %f",gs);
}