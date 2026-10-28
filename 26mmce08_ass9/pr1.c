// addition of two matrix //

#include<stdio.h>
#include<stdlib.h>

void main()

{	
	int r1,c1,r2,c2,i,j;

	printf("Enter the dimension of 1st matrix : ");
	scanf("%d%d",&r1,&c1);

	printf("Enter the dimension of 2nd matrix : ");
        scanf("%d%d",&r2,&c2);

	if(r1!=r2||c1!=c2)
	{
		printf("\n Matrix addition can not possible.");
		exit (0);
	}

	int mat1[r1][c1],mat2[r2][c2],mat3[r1][c2];

        printf("Enter elements of 1st array: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&mat1[r1][c1]);
		}
	}

	printf("Enter elements of 2nd array: ");
        for(i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        scanf("%d",&mat2[r2][c2]);
                }
        }

	for(i=0;i<r1;i++);

	{
		for(j=0;j<c1;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}

	printf("\n Resultant matrix is :");
	for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        printf("%d\t",mat3[i][j]);
                }

		printf("\n");
        }

}
