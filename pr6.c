// swapping of number without third variable //

#include<stdio.h>

void main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d \t %d",&num1,&num2);
    printf("Before swapping numbers are %d\t%d ",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf ("\nafter swapping numbers are  %d \t %d", num1,num2);

}