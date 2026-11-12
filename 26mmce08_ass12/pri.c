//To count the characters present in a string
#include<stdio.h>
void main()
{
	char str[20];
	int i=0, len;
	printf("Enter any string: ");
	scanf("%[^\n]", str);
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	printf("\nString %s has %d characters present.\n", str,len);
}

