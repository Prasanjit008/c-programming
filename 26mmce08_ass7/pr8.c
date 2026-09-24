// sum of individual digit //


#include<stdio.h>

int Sum(int);

void main()
{
	int num,sum;

	printf("Enter any num: ");
	scanf("%d",&num);

	sum=Sum(num);

	printf("\n Sum of the digits = %d",sum);
}

int Sum(int x)
{
	if(x==0)
		return 0;
	else
		return((x%10)+Sum(x/10));
}
