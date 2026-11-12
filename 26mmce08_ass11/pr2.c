// add 10 to each array element using pointer //

#include<stdio.h>
void sum(int * , int);

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

        sum(a,n);       
}

void sum(int *p,int n)
{
        int i,s=0,b[n];
        for(i=0;i<n;i++)
        {
                b[i]=10+*(p+i);

        }

	printf("array after adding 10: \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",b[i]);
	}
       
}

