// largest element in array using pointer //

#include<stdio.h>
int larg(int * , int);

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

	printf("Largest element is: %d",larg(a,n));
}
int larg(int *p,int n)
{
	int i,max=*p;
	for(i=0;i<n;i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
		}
	}

	return max;
}

       
