// Vowel or not switch case//

#include<stdio.h>
void main()
{
    char ch;

    printf("Enter the character: ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("Character is a vowel");
     break;
    default:
      printf("Character is not a Vowel");
        break;
    }
}