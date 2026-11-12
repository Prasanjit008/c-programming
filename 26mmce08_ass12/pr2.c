//To convert a string to uppercase
#include<stdio.h>
void main()
{
	char str[20];
	int i;
	printf("Enter any string: ");
	gets(str);
	for (i = 0; str[i] != '\0'; i++) {
        	if (str[i] >= 'a' && str[i] <= 'z') 
            		str[i] = str[i] - 32;
    	}
    	printf("Uppercase string: %s\n", str);
}
