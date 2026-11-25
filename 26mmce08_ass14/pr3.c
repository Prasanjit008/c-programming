// Searching in array with DMA//

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,n,*p,*q,flag=1;
	printf("\nEnter the array size: ");
	scanf("%d",&n);

	p=(int *) malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("\nMemory allocation failed");
		exit(0);
	}

	printf("Enter Array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}

	q=(int *) malloc(sizeof(int));

	printf("Enter the element you want to search: ");
	scanf("%d",q);

	for(i=0;i<n;i++)
	{
		if(*q==*(p+i))
		{
			flag=1;
			printf("%d is found at %d position.",*q,i);
			break;
		}
	}

	if(flag==0)
		printf("%d is not found.",*q);
	free(p);
	free(q);
}
