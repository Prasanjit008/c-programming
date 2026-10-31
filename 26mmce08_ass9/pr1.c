
// Addition of two matrices //

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r1,c1,r2,c2,i,j;

    printf("Enter the dimension of 1st matrix: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter the dimension of 2nd matrix: ");
    scanf("%d%d",&r2,&c2);

    if(r1!=r2 || c1!=c2)
    {
        printf("\nMatrix addition is not possible.");
        exit(0);
    }

    int mat1[r1][c1], mat2[r2][c2], mat3[r1][c1];

    printf("Enter elements of 1st matrix:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    // Addition of matrices

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    printf("\nResultant matrix is:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",mat3[i][j]);
        }

        printf("\n");
    }

    return 0;
}
