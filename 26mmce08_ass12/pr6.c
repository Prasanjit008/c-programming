//To find out the length of any string using user-defined function
#include<stdio.h>
int XSTRLEN(char *);
void main()
{
	int len;
	char str[20];
	printf("Enter any string: ");
	gets(str);
	len=XSTRLEN(str);
	printf("\nLength of the string: %d\n", len);
}
int XSTRLEN(char *ptr)
{
	int len=0;
	while(*ptr!='\0')
	{
		len++;
		ptr+=1;
	}
	return len;
}
