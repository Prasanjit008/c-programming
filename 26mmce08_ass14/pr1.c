 // Dynamically allocate memory for 10 integers and display their sum.//


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr;
    int sum = 0;

    arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the array elements = %d\n", sum);

    free(arr);

}

          	  
