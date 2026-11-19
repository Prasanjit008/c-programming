//distance between two point//

#include<stdio.h>
#include<math.h>

struct Point
{
	int  xCo;
	int yCo;
};

void input(struct Point*);
double distance(struct Point*, struct Point*);

int main()
{
	struct Point p1, p2;

	input(&p1);
	input(&p2);

	printf("Distance is : %.2lf\n", distance(&p1, &p2));	
}

void input(struct Point *b1)
{
	printf("Enter Coordinates : ");
	scanf("%d", &b1->xCo);
	scanf("%d", &b1->yCo);
}

double distance(struct Point *p1, struct Point *p2)
{
	return sqrt(pow((p2->xCo - p1->xCo), 2) + pow((p2->yCo - p1->yCo), 2));
}
