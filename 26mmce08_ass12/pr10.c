//no of character in a string //

#include<stdio.h>
int XSTRLEN(char *);
void main()
{
        int len;
        char str[20];
        printf("Enter any string: ");
        gets(str);
        len=XSTRLEN(str);
        printf("\nnumber of character present in the string is: %d\n", len);
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

