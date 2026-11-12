//To extract a substring from a string
#include<stdio.h>
void main()
{
	char str[20],extstr[20];
	int i,j,n,m;
	printf("Enter any string: ");
	gets(str);
	printf("Enter the location to the start of the substring extraction: ");
	scanf("%d",&m);
	printf("Enter the length of the substring: ");
	scanf("%d",&n);
	j=m;
	i=0;
	while(str[j]!='\0' && n>0)
	{
		extstr[i]=str[j];
		i++;
		j++;
		n--;
	}
	extstr[i]='\0';
	printf("\nThe substring is %s\n", extstr);
}
