// displaying 2d array by pointer //

#include<stdio.h>
void show(int *,int ,int)
void main()
{
    int r,c,i,j;
    printf("Enter dimension of mstrix: ");
    scanf("%d%d",&r,&c);


     int mat1[r][c];

    printf("Enter the elements of 1st marrix.");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
           scanf("%d",&mat1[i][j]);
         }
     }

    show(mat1,r,c);
}

void show(int *p,int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",*(*p+i)+j);
		}

		printf("\n");
	}
}
