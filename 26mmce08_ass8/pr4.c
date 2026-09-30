// delete an element from given position //

#include<stdio.h>

void main()
{
	int n, i, loc;

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter Elements : ");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Enter the location of the element you want to delete : ");
	scanf("%d", &loc);
	
	if (loc < 1 || loc > n) {
		printf("Can't possible deletion at this location\n");
	
	}

	for (i = loc-1; i < n-1; i++)
		arr[i] = arr[i+1];
	
	printf("Array after Deletion : ");
	for (i = 0; i < n-1; i++)
		printf("%d ", arr[i]);
}
