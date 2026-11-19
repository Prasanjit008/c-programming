#include <stdio.h>
struct EMPLOYEE
{
	char name[50];
	int empid;
	char department[30];
	int age;
	float salary;
};
void input(struct EMPLOYEE *);
void display(struct EMPLOYEE *);
float average(struct EMPLOYEE *);
int main()
{
	struct EMPLOYEE e[5];
	struct EMPLOYEE *p;
	int i;
	float avg;
	p = e;
	for(i = 0; i < 5; i++)
	{
	printf("\nEnter details of Employee %d\n", i + 1);
	input(p + i);
	}
	avg = average(p);
	printf("\nAverage Salary = %.2f\n", avg);
	printf("\nEmployees having salary greater than average:\n");
	for(i = 0; i < 5; i++)
	{
	if((p + i)->salary > avg)
	display(p + i);
	}
return 0;
}
void input(struct EMPLOYEE *p)
{
	printf("Enter name: ");
	scanf(" %[^]", p->name);
	printf("Enter employee ID: ");
	scanf("%d", &p->empid);
	printf("Enter department: ");
	scanf(" %[^ ]", p->department);
	printf("Enter age: ");
	scanf("%d", &p->age);
	printf("Enter salary: ");
	scanf("%f", &p->salary);
}
float average(struct EMPLOYEE *p)
{
	int i;
	float sum = 0;
	for(i = 0; i < 5; i++)
	sum = sum + (p + i)->salary;
return sum / 5;
}
void display(struct EMPLOYEE *p)
{
	printf("\nName: %s\n", p->name);
	printf("Employee ID: %d\n", p->empid);
	printf("Department: %s\n", p->department);
	printf("Age: %d\n", p->age);
	printf("Salary: %.2f\n", p->salary);
}
