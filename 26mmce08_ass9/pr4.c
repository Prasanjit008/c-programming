// addition of row and column elements //

#include<stdio.h>
void main()
{
	int r, c, i, j, sum;

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

    for(i=0;i<r;i++)
    {
	    sum=0;
	    for(j=0;j<c;j++)
	    {

		    sum=sum+a[i][j];
	    }
	    printf("\n Sum of the elements in row %d is %d",i,sum);
    }


    for(j=0;j<r;j++)
    {
            sum=0;
            for(i=0;i<r;i++)
            {

                    sum=sum+a[i][j];
            }
            printf("\n Sum of the elements in column %d is %d",i,sum);
    }
}
