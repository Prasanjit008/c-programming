// GCD using recursion //

#include<stdio.h>

int GCD(int,int);

void main()
{
	int a,b,gcd;

	printf("Enter any two num: ");
	scanf("%d%d",&a,&b);

	gcd=GCD(a,b);

	printf("\n GCD= %d",gcd);
}

int GCD(int x,int y)
{
	int rem;
        rem=x%y;

	if(rem==0)
		return y;
	else
		return(GCD(y,rem));
}
