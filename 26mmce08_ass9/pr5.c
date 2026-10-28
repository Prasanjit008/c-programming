// multiplication of matrix //
#include<stdlib.h>
#include<stdio.h>
void main()
{
	int r1,c1,r2,c2,i,j,k;

	printf("Enter dimension of 1st matrix: ");
	scanf("%d%d",&r1,&c1);

	printf("Enter dimension of 2nd matrix: ");
        scanf("%d%d",&r2,&c2);

	if(c1!=r2)
	{
		printf("Multiplication is not possible.");
		exit (0);
	}

	int mat1[r1][c1],mat2[r2][c2],prod[r1][c2];

	printf("\nEnter elements for 1st matrix: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}


	printf("\nEnter elements for 2nd matrix: ");
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        scanf("%d",&mat2[i][j]);
                }
        }

	printf("\n1ST matrix elements are: ");
        for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d  ",mat1[i][j]);
		}
		printf("\n");
	}

	printf("\n2nd matrix elements are: ");
        for(i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        printf("%d  ",mat2[i][j]);
                }
                printf("\n");
        }




	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			prod[i][j]=0;
			for(k=0;k<r2;k++)
				prod[i][j]=prod[i][j]+mat1[i][k]*mat2[k][j];
		}
	}

	printf("Product matrix is: ");
	for(i=0;i<r1;i++)
        {
                for(j=0;j<c2;j++)
                {
                        printf("%d  ",prod[i][j]);
                }
                printf("\n");
        }


}
