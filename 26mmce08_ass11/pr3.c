// revers an array using pointer //

#include<stdio.h>
void rev(int * , int);

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

        rev(a,n);
}

void rev(int *p,int n)
{
        int i,j=0,re[n];
	for(i=n-1;i>=0;i--)
	{
		re[j]=*(p+i);
		j++;
	}
        printf("Array after revers: ");
	for(j=0;j<n;j++)
	{
		printf("%d ",re[j]);
	}
}


