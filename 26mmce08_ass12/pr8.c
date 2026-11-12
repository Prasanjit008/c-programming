// concatinat at the end of the another string //

#include<stdio.h>
void xstrcat(char *,char *);
void main()
{
	char source[20],target[50];
	int i,j;

	printf("Enter the sourse string: ");
	gets(source);

	printf("Enter the targare string: ");

	gets(target);

	xstrcat(target,source);
}

void xstrcat(char *target,char *source)
{
	int i=0;
	while(target[i]!=0)
	  i++;
	int j=0;

	while(source[j]!='\0')
	{
		target[i]=source[j];
		i++;
		j++;
	}
	target[i]='\0';
	printf("\nTarget string is %s",target);
}
