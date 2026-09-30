// linear search //

#include<stdio.h>

void main()
{
	int n, i, loc=-1,key;

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int a[n];

	printf("Enter Elements : ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("Enter the element you want to search: ");
        scanf("%d",&key);
        
        for(i=0;i<n;i++)
	{
	  if (key==a[i])
	  {
	     loc=i;
             break;
          }
        }
        if (loc== -1)
	{
	 printf("\n %d is not found",key);
        
        }
	else 
		printf("\n %d is found at location %d",key,loc);
}

