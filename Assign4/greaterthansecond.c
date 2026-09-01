// greater than the second //

  #include <stdio.h>
  void main() 
  {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("Both numbers are equal\n");
    }

    else 
    {
        if (a > b)
        {
            printf("%d is greater than %d\n", a, b);
        }
              
        else
        {
            printf("%d is greater than %d\n", b, a);
        }

    }

  }