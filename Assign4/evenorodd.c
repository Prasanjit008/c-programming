// even or odd //

#include <stdio.h>
void main() 
{
  int n;

  printf("Enter a number to check even or odd: ");
  scanf("%d", &n);

  if (n % 2 == 0)
  {
    printf("%d is Even\n", n);
  } 
  else
  {
    printf("%d is Odd\n", n);
  } 
}