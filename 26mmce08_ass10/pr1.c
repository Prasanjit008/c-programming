// sum of elements in array using function //
int sum(int *,int);
#include<stdio.h>
void main()
{
    int n,i,total;

    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter elementes of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Sum of all elements of the array = %d",total=sum(a,n));
} 

int sum(int *p,int n)
{
   int i,s=0;

   for(i=0;i<n;i++)
   {
    s=s+*(p+i);
   }

   return s;
}