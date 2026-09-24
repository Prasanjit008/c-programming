// area of the circle using function //

#include<stdio.h>
float Area(float);

void main()
{
	float r,area;

	printf("Enter the radious value: ");
	scanf("%f",&r);

	area=Area(r);

	printf("Area of the circle is : %f",area);
}

float Area(float j)
{
	int val = 3.14*j*j;

	return val;
}
