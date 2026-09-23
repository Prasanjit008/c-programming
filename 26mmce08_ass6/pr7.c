// armstromg number in a range //

#include <stdio.h>

void main()
{
    int start, end, i, n, rem, sum;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for(i = start; i <= end; i++)
    {
        n = i;
        sum = 0;

        while(n > 0)
        {
            rem = n % 10;
            sum = sum + rem * rem * rem;
            n = n / 10;
        }

        if(i == sum)
            printf("%d ", i);
    }
}



