// Calculat sum of m to n numbers.
#include<stdio.h>

int main()
{
	int m, n, sum;

	printf("Enter start and end : ");

	scanf("%d%d", &m, &n);

	while (m <= n) 
	{
		sum += m;
		m++;
	}

	printf("Sum is : %d\n", sum);
}
