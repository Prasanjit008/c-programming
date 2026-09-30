// Insert an element into an half partial field array.

#include<stdio.h>

int main()
{
	int n, i, idx, val;

	printf("Enter size of array : ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter Elements : ");
	for (i = 0; i < n-1; i++)
		scanf("%d", &arr[i]);

	printf("\nEnter the index and value you want to insert : ");
	scanf("%d%d", &idx, &val);

	if (idx < 0 || idx >= n) {
		printf("Value can't be inserted at %d index\n", idx);
		return 0;
	}
	
	for (i = n-2; i >= idx; i--) 
		arr[i+1] = arr[i];
	arr[idx] = val;
	
	printf("After insertion : ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
