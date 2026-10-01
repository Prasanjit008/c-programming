// duplicate element in an array //

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

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("Value %d find at location %d %d",a[i],i,j);
			}
		
		}


	}
}

