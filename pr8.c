// Calculation of simple intrest //

#include <stdio.h>
void main ()
{
    float p,t,r,si;
    printf("Enter principal amount: ");
    scanf("%f",&p);
        printf("\nEnter Time:  ");
        scanf("%f",&t);
        printf ("\nEnter Rate of Intrest: ");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("\nSimple intrest is: %f",si);

}