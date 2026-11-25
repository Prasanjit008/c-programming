// Addition of complex number //

#include<stdio.h>
struct COMPLEX
{
	int r,i;
};
struct COMPLEX Add(struct COMPLEX,struct COMPLEX);
void main()
{
	struct COMPLEX c1,c2,c3;
	printf("Enter first number: ");
	scanf("%d%d",&c1.r,&c2.i);

	printf("Enter second number: ");
	scanf("%d%d",&c2.r,&c2.i);

	c3=Add(c1,c2);

	printf("\nResult=%d+%di\n",c3.r,c3.i);
}
struct COMPLEX Add(struct COMPLEX c1,struct COMPLEX c2)
{
	struct COMPLEX c4;
	c4.r=c1.r+c2.r;
	c4.i=c1.i+c2.i;
	return c4;
}

