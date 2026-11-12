//To extract last n characters of any string
#include<stdio.h>
void main()
{
	char str[20],extstr[20];
	int i,j,n,len=0;
	printf("Enter any string: ");
	gets(str);
	printf("Enter value of last character to extract: ");
	scanf("%d",&n);
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	i=0;
	j=len-n;
	while(str[j]!='\0')
	{
		extstr[i]=str[j];
		i++;
		j++;
	}
	extstr[i]='\0';
	printf("\nExtracted String: %s\n",extstr);
}
