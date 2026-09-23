// Program to display numbers divisible by the sum of their digits

#include <stdio.h>

void main()
{
    int start, end, i, n, rem, sum;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Numbers dvisible by individual digits are: ");

    for(i = start; i <= end; i++)
    {
        n = i;
        sum = 0;

        while(n > 0)
        {
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }

        if(sum != 0 && i % sum == 0)
            printf("%d ", i);
    }
}
