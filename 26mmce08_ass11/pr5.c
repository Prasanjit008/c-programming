// swaping of number by call by address //

#include<stdio.h>

void swap(int *,int *);
void main()
{
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);

	swap(&a,&b);

	printf("numner after swapping: a=%d,b=%d",a,b);
}

void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
