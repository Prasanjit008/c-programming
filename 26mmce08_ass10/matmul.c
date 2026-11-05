
#include<stdio.h>

void Multiply(int *,int,int,int *,int,int,int *);

void main()
{
    int r1,c1,r2,c2,i,j;

    printf("Enter dimension of 1st matrix: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter dimension of 2nd matrix: ");
    scanf("%d%d",&r2,&c2);

    if(c1 != r2)
    {
        printf("Multiplication is not possible.");
        return;
    }

    int mat1[r1][c1],mat2[r2][c2],mat3[r1][c2];

    printf("Enter the elements of 1st matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    Multiply(&mat1[0][0],r1,c1,&mat2[0][0],r2,c2,&mat3[0][0]);

    printf("Resultant matrix is:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
}

void Multiply(int *p,int r1,int c1,int *q,int r2,int c2,int *s)
{
    int i,j,k;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            *(s+i*c2+j)=0;

            for(k=0;k<c1;k++)
            {
                *(s+i*c2+j) += *(p+i*c1+k) * *(q+k*c2+j);
            }
        }
    }
}
