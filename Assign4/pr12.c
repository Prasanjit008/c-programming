// valid traingle or not //

  #include <stdio.h>

 void main()
 {
    float a, b, c, largest;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    if ((a + b + c - largest) > largest)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }

  }
