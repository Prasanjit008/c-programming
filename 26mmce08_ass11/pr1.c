// sum of array element using pointer //

#include<stdio.h>
int sum(int * , int);

void main()
{
	int i,n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Sum of elements = %d",sum(a,n));
}

int sum(int *p,int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s=s+*(p+i);
	
	}
	return s;
}
