// second largest element of the array //

#include<stdio.h>
void main()
{
	int n,i,j,largest,second;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n],rev[n];

	printf("\nEnter the elements: ");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	largest=a[0];
	second=a[0];

	for(i=1;i<n;i++)
	{
		if(a[i]>largest)
		{
			
               		second=largest;
	            	largest=a[i];
		}
		else if(a[i]>second && a[i]!=largest)
		{
			second=a[i];
		}
	}
	printf("second largest element of array is: %d",second);
}


