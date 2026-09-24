// factorial of a number using recursion //

#include<stdio.h>

int Fact(int);

void main()
{
	int num,res,fact=1;

	printf("Enter any number: ");
	scanf("%d",&num);

	res=Fact(num);

	printf("Factorial of %d is %d.\n",num,res);
}

int Fact(int x)
{
	if(x==0 || x==1)
		return 1;
	else
		return(x*Fact(x-1));
}
