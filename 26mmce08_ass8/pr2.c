// largest and smallest element of an array //


#include<stdio.h>
void main()
{
        int n,i;
     

        printf("Enter the size of the array: ");
        scanf("%d",&n);

        int a[n];

        printf("\n Enter the elements of the array: ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
	}
	int largest=a[0],smallest=a[0];
	for(i=1;i<n;i++)
	{
		if (a[i]>largest)
		{
			largest=a[i];
		}
		if (a[i]<smallest)
		{
			smallest=a[i];
		}
	}

	printf("\nlargest element is %d , and smallest element is %d",largest,smallest);
}


