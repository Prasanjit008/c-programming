//Array sorting//


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, *arr ;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid array size.\n");
        exit(0);
    }

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }




