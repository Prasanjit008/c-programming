//  leap or not //

  #include <stdio.h>
  void main() 
  {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("%d is a Leap year\n", year);
    }

    else
    {
        printf("%d is not a Leap year\n", year);
    }

   }
