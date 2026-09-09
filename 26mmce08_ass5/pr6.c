// Check number is prime or composite.
#include<stdio.h>

int main()
{
	int num;

	printf("Enter any num : ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) {
			printf("%d is a Composite number\n", num);
			return 0;
		}
	}

	printf("%d is prime number\n", num);
}
