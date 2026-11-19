#include<stdio.h>

struct Book
{
	char title[20];
	char name[20];
	int  pages;
	float price;
};

void input(struct Book*);
void display(struct Book*);

int main()
{
	struct Book b1;

	input(&b1);
	display(&b1);	
}

void input(struct Book *b1)
{
	printf("Enter book title : ");
	scanf("%[^\n]", b1->title);
	printf("Enter auther name : ");
	scanf(" %[^\n]", b1->name);
	printf("Enter pages : ");
	scanf("%d", &b1->pages);
	printf("Enter price : ");
	scanf("%f", &b1->price);
}

void display(struct Book *b1)
{
	printf("Title : %s\n", b1->title);
	printf("Author Name : %s\n", b1->name);
	printf("Total Pages : %d\n", b1->pages);
	printf("Price is : %.2f\n", b1->price);
}
