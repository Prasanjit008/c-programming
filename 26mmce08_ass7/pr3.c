// largest among three number //

#include<stdio.h>

int Largest(int,int,int);

void main()
{
	int a,b,c,res;

	printf("Enter three number: ");
	scanf("%d%d%d",&a,&b,&c);

	res=Largest(a,b,c);

	printf("largest number is: %d",res);
}

int Largest(int x,int y,int z)
{
	
	if(x>y && x>z)
	{
		return x;
	}
	else if(y>x && y>z)
	{
		return y;
	}
	else 
		return z;
}
