// largest element in array using function //
#include<stdio.h>
int search(int *,int,int);

void main()
{
    int n,i,key,result;

    printf("Enter the array size: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

   printf("Enter the element to search: ");
   scanf("%d", &key);

   result=search(a,n,key);


   if (result==-1)
   {
    printf("Element not found.");
   }
   else 
   {
    printf("Element found at position %d",result+1);
   }



}
int search(int *p,int n,int key)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(*(p+i)==key)
        {
            return i;
        }
    }
    return -1;

}
