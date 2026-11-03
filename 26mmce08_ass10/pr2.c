// largest element in array using function //
#include<stdio.h>
int largest(int *,int);

void main()
{
    int n,i,large;

    printf("Enter the array size: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

   printf("Largest element is %d",large=largest(a,n));

}
int largest(int *p,int n)
{
    int i,max= *p;
    for(i=1;i<n;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
        }
    }
    return max;

}
