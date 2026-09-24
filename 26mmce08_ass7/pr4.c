// prime or not using function //

#include<stdio.h>

int Check(int);

void main()
{
	int i,res;

	printf("Enter any positive number to check prime or not: ");
	scanf("%d",&i);

	res=Check(i);

	if(res==1)
	{
		printf("%d is a composit number\n",i);
	}
	else
		printf("%d is a prime number\n",i);
}

int Check(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0) {

			return 1;
		}
	}
}
