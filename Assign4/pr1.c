// largest between 2 number //

#include <stdio.h>
void main() 
{
  int a, b;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  if (a > b)
      printf("Largest number is %d\n", a);
  else
      printf("Largest number is %d\n", b);

}