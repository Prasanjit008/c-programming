/* Dynamically allocate an integer array and find its largest and smallest elements. */


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, *arr, largest, smallest;

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
        scanf("%d", &arr[i]);

    largest = smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    free(arr);

}
