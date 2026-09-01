// lowercase then convert it into uppercase //

#include <stdio.h>
void main() 
{
  char ch;

  printf("Enter any character: ");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z')
  {
     printf("The lower case letter is %c", ch + 32);
  }

  else
  {
    printf("The upper case letter is %c", ch - 32);
  }

}