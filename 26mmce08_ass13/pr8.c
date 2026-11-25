// ADD TIME //

#include<stdio.h>

struct Time 
{
	int hour;
	int minute;
	int second;
};

void inputTime(struct Time*);
void display(struct Time);
struct Time addTime(struct Time, struct Time);

int main()
{
	struct Time t1, t2, sum;

	printf("Enter first time\n");
	inputTime(&t1);

	printf("\nEnter second time\n");
	inputTime(&t2);

	sum = addTime(t1, t2);

	printf("\nSum of times\n");
	display(sum);
}

void inputTime(struct Time *t)
{
	printf("Enter hour : ");
	scanf("%d", &t->hour);

	printf("Enter minute : ");
	scanf("%d", &t->minute);

	printf("Enter second : ");
	scanf("%d", &t->second);
}

void display(struct Time t)
{
	printf("Hour : %d\n", t.hour);
	printf("Minute : %d\n", t.minute);
	printf("Second : %d\n", t.second);
	printf("Time : %02d:%02d:%02d\n", t.hour, t.minute, t.second);
}

struct Time addTime(struct Time a, struct Time b)
{
	struct Time result;

	result.second = a.second + b.second;
	result.minute = a.minute + b.minute;
	result.hour = a.hour + b.hour;

	if (result.second >= 60)
	{
		result.minute += result.second / 60;
		result.second = result.second % 60;
	}

	if (result.minute >= 60)
	{
		result.hour += result.minute / 60;
		result.minute = result.minute % 60;
	}

	return result;
}
