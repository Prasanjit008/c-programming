// reverse an array //

#include<stdio.h>
void main()
{
	int i,j,n;

	printf("Enter the array size: ");
	scanf("%d",&n);

	int a[n],re[n];

	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	j=0;

	for(i=n-1;i>=0;i--)
	{
		re[j]=a[i];
		j++;
	}

	for(j=0;j<n;j++)
	{
		printf("%d\t",re[j]);
	}
}
