// Program to display palindrome numbers within a given range //

#include <stdio.h>

void main()
{
    int start, end, i, n, rev, rem;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Palindrome numbers are: ");

    for(i = start; i <= end; i++)
    {
        n = i;
        rev = 0;

        while(n > 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }

        if(i == rev)
            printf("%d ", i);
    }
}
