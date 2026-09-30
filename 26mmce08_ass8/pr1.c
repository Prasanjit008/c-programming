// mean of n number in array //

#include<stdio.h>
void main()
{
	int n,sum=0,i;
	float mean;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("\n Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum= sum+a[i];
	}
	mean=(float) sum/n;
	printf("\n Mean= %.2f",mean);
}
