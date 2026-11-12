//To extract first n characters of any string
#include<stdio.h>
void main()
{
	char str[20],extstr[20];
	int i=0,n;
	printf("Enter any string: ");
	gets(str);
	printf("Enter n character to extract: ");
	scanf("%d",&n);
	while(str[i]!='\0' && i<n)
	{
		extstr[i]=str[i];
		i++;
	}
	extstr[i]='\0';
	printf("\nExtracted String: %s\n",extstr);
}
