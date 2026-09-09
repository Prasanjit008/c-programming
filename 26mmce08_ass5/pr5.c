// Largest among 10 num using conditional operator.
#include<stdio.h>

int main()
{
	int num, largest = -1;

	for (int i = 1; i < 10; i++)
	{
		printf("Enter %dth num : \n", i);
		scanf("%d", &num);

		largest = largest < num ? num : largest;
	}

	printf("Largest is : %d\n", largest);
}
