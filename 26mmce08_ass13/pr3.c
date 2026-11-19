// employee strcture //

#include<stdio.h>

struct Employee
{
	char name[50];
	int empid;
	char department[50];
	int age;
	float sal;
};

void input(struct Employee *);
void display(struct Employee *);

int main()
{
	int i;
	struct Employee e[5];
	struct Employee *p;
	p=e;
        printf("Enter employee details: \n");
	for(i=0;i<5;i++)
	{
        	input(p+i);
	}

	printf("\n----Employee Details-----\n");
	for(i=0;i<5;i++)
	{
        	display(p+i);
	}
}

void input(struct Employee *p)
{
	printf("Enter name : ");
	scanf("%[^\n ]s", p->name);
	printf("Enter department : ");
	scanf(" %[^\n ]s", p->department);
	printf("Enter employee id ");
	scanf("%d", &p->empid);
	printf("Enter age : ");
	scanf("%d", &p->age);
	printf("Enter salary : ");
        scanf("%f", &p->sal);
}

void display(struct Employee *p)
{
	printf("Name: %s\n",p->name);
	printf(" Department: %s\n", p->department);
	printf("Empid: %d\n", p->empid);
	printf("Age: %d\n", p->age);
	printf("Salary: %.2f\n",p->sal);
}
