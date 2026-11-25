// Addition of distance //

#include<stdio.h>
struct DISTANCE
{
        int km,m;
};
struct DISTANCE Add(struct DISTANCE,struct DISTANCE);
void main()
{
        struct DISTANCE c1,c2,c3;
        printf("Enter first distance in meter: ");
        scanf("%d",&c2.m);

        printf("Enter second distance in meter: ");
        scanf("%d",&c2.m);

        c3=Add(c1,c2);

        printf("\nTotal distance is %dkm %dmeter\n",c3.km,c3.m);
}
struct DISTANCE Add(struct DISTANCE c1,struct DISTANCE c2)
{
        struct DISTANCE c4;
	c4.m=c1.m+c2.m;
	if(c4.m>1000)
	{
		c4.km=c4.m/1000;
		c4.m=c4.m%1000;
	}
	return c4;
      
}

