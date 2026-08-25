// greatest among three number using conditional operator //

#include<stdio.h>

void main()
{
    int num1,num2,num3,largest;
    printf("Enter any three number: ");
    scanf("%d %d %d", &num1,&num2,&num3);
    largest=(num1>num2)?(num1>num3?num1:num3):(num2>num3?num2:num3);
    printf("\nlargest number= %d",largest);
}