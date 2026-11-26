// array merzing using realloc() //

#include<stdio.h>
#include<stdlib.h>

void inputArray(int*, int);
void display(int*, int);

int main()
{
	int n1, n2;

	printf("Enter size of first array : ");
	scanf("%d", &n1);

	int *arr1 = (int*) malloc(n1 * sizeof(int));

	if (arr1 == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}

	inputArray(arr1, n1);

	printf("\nEnter size of second array : ");
	scanf("%d", &n2);

	int *arr2 = (int*) malloc(n2 * sizeof(int));

	if (arr2 == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}

	inputArray(arr2, n2);

	arr1 = (int*) realloc(arr1, (n1 + n2) * sizeof(int));

	if (arr1 == NULL)
	{
		printf("Memory reallocation failed\n");
		return 1;
	}

	for (int i = 0; i < n2; i++)
		arr1[n1 + i] = arr2[i];

	printf("\nMerged array : ");
	display(arr1, n1 + n2);

	free(arr1);
	free(arr2);
	return 0;
}

void inputArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter element %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
}

void display(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	printf("\n");
}
