// sum of diagonal elements //

#include <stdio.h>

int main()
{
    int r, c, i, j, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r && i < c; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
