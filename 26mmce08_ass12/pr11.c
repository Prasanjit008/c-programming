// number of character using pointer


#include<stdio.h>
int scount(char *);
void main()
{
        int len;
        char str[20];
        printf("Enter any string: ");
        gets(str);
        len=scount(str);
        printf("\nNumber of character present in the string: %d\n", len);
}
int scount(char *ptr)
{
        int len=0;
        while(*ptr!='\0')
        {
                len++;
                ptr+=1;
        }
        return len;
}

