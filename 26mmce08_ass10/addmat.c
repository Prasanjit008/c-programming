#include<stdio.h>
#include<stdlib.h>
void Sum(int *,int ,int,int *,int,int,int *);

void main()
{
    int r1,c1,r2,c2,i,j;
    printf("Enter dimension of 1st mstrix: ");
    scanf("%d%d",&r1,&c1);
 
    printf("Enter dimension of second matrix: ");
    scanf("%d%d",&r2,&c2);

    if(r1!=r2 || c1!=c2)
    {
         printf("Addition is not possible.");
         exit (0);
     }
     
     int mat1[r1][c1],mat2[r2][c2],mat3[r1][c1];

    printf("Enter the elements of 1st marrix.");
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c1;j++)
        {
           scanf("%d",&mat1[i][j]);
         }
     }


     printf("Enter the elements of 2nd marrix.");
    for(i=0;i<r2;i++)
    {
       for(j=0;j<c2;j++)
        {
           scanf("%d",&mat2[i][j]);
         }
     }

    Sum(&mat1[0][0],r1,c1,&mat2[0][0],r2,c2,&mat3[0][0]);

   printf("Resultant matrix is: \n");
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c1;j++)
        {
           printf("%d  ",mat3[i][j]);
         }
           printf("\n");
     }

}

void Sum(int *p, int r1,int c1,int *q, int r2, int c2,int *s)
{
    int i, j;
    for(i=0;i<r1;i++) 
   {
      for(j=0;j<c1;j++)
       {
         *(s+i*c1+j)=*(p+i*c1+j)+*(q+i*c2+j);

        }
     }

}
