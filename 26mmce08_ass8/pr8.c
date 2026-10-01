// merge two array element into new array //

#include<stdio.h>
void main()
{
	int n,m,i,j;

	printf("Enter the size of both array: ");
	scanf("%d%d",&n,&m);

	int a[n], b[m], c[m+n];

	printf("Enter elements for 1st Array : ");
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &a[i]);
	}

	printf("Enter elements for 2nd Array : ");
        for (i = 0; i < n; i++)
        {
                scanf("%d", &b[i]);
        }

	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}

	for(j=0;j<m;j++)
	{
		c[i]=b[j];
		i++;
	}
        
	printf("Elements of new array are: ");
	for(i=0;i<(m+n);i++)
	{
		printf("%d ",c[i]);
	}
}

