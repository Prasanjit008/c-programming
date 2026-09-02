// even or odd using switch statement //

#include<stdio.h>
void main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    switch (num%2)
    {
    case 0:
        printf("Number is even");
        break;
    case 1:
        printf("Number is odd");
        break;    
    
    default:
        break;
    }
}