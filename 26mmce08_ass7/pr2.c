// power calculation //

#include<stdio.h>
#include<math.h>
int Power(int,int);

void main()
{
	int x,n,val;

	printf("Enter the number X : ");
	scanf("%d",&x);

	printf("enter the power : ");
        scanf("%d",&n);

	val=Power(x,n);

	printf("Result is: ",val);
}

int Power(int m,int n)
{	
	int x=pow(m,n);

	return x;
}
