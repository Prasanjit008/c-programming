// sum of individual digits of three digit number //

#include<stdio.h>

void main()
{
 int num,sum;
printf("Enter a three digit numbers : ");
scanf("%d \t %d",&num); 
sum=(num%10)+((num/10)%10)+(num/100);
printf("\nSum of individual digits is : %d",sum);

}