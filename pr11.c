// Average mark of a student //

#include<stdio.h>
void main()
{
    float math,phy,chem,bio,it,avg;
    printf("Enter mark obtain in Math: ");
    scanf("%f",&math);

    printf("\nEnter mark obtain in Phy: ");
    scanf("%f",&phy);

    printf("\nEnter mark obtain in Chem: ");
    scanf("%f",&chem);

    printf("\nEnter mark obtain in Bio: ");
    scanf("%f",&bio);

    printf("\nEnter mark obtain in IT: ");
    scanf("%f",&it);
    
    avg=(math+phy+chem+bio+it)/5;

    printf("\nAverage mark in 5 subject is: %f",avg);
}