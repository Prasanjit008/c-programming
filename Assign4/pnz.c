// number is positive or negative or equal to zero //

  #include <stdio.h>
  int main() 
  {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Number is Zero\n");
    }

    else 
    {
        if (n > 0)
        {
            printf("Number is Positive\n");
        }
        else
        {
            printf("Number is Negative\n");
        }

    }

 }

