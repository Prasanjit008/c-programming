//To copy the content of one string to another string using user-defined function
#include<stdio.h>
void XSTRCPY(char *, char *);
void main()
{
	char source[20], target[20];
	printf("Enter any string: ");
	gets(source);
	XSTRCPY(target,source);
	printf("\nThe target string is: %s\n", target);
}
void XSTRCPY(char *p, char *q)
{
	while(*q!='\0')
	{
		*p=*q;		
		p++;
		q++;
	}
	*p='\0';
}
