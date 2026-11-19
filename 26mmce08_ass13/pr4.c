// student strcture //


#include <stdio.h>
struct STUDENT
{
	char name[50];
	int roll_no;
	char branch[30];
	float cgpa;
};
void input(struct STUDENT *);
void display(struct STUDENT *);
struct STUDENT *highest(struct STUDENT *);
int main()
{
	struct STUDENT s[5];
	struct STUDENT *p, *h;
	int i;
	p = s;
for(i = 0; i < 5; i++)
{
	printf("\nEnter details of Student %d\n", i + 1);
	input(p + i);
}
	h = highest(p);
printf("\n--- STUDENT WITH HIGHEST CGPA ---\n");
display(h);
return 0;
}
void input(struct STUDENT *p)
{
	printf("Enter name: ");
	scanf(" %[^\n]", p->name);
	printf("Enter roll number: ");
	scanf("%d", &p->roll_no);
	printf("Enter branch: ");
	scanf(" %[^\n]", p->branch);
	printf("Enter CGPA: ");
	scanf("%f", &p->cgpa);
}
struct STUDENT *highest(struct STUDENT *p)
{
	int i;
	struct STUDENT *max;
	max = p;
for(i = 1; i < 5; i++)
{
	if((p + i)->cgpa > max->cgpa)
{
	max = p + i;
}
}
       return max;
}
void display(struct STUDENT *p)
{
	printf("\nName: %s\n", p->name);
	printf("Roll Number: %d\n", p->roll_no);
	printf("Branch: %s\n", p->branch);
	printf("CGPA: %.2f\n", p->cgpa);
}

