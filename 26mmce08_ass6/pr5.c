// Program to display prime numbers within a given range //

#include <stdio.h>

void main()
{
    int start, end, i, j, flag;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Prime numbers are: ");

    for(i = start; i <= end; i++)
    {
        if(i < 2)
            continue;

        flag = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            printf("%d ", i);
    }
}

