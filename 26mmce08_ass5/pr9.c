#include <stdio.h>
#include <stdio.h>

void main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % 4 == 0 || i % 4 == 1)
                printf("%d ", j % 2);
            else
                printf("%d ", (j + 1) % 2);
        }

        printf("\n");
    }

}

