  //To find out the GCD of two numbers.
  

  #include <stdio.h>
  void main()
 {
    int n1, n2, dividend, divisor, rem;
    printf("Enter any two numbers: ");
    scanf("%d %d", &n1, &n2);

    if(n1>n2)
    {
        dividend=n1;
        divisor=n2;
    }
    else
    {
        dividend=n2;
        divisor=n1;
    }
    while(divisor)
    {
        rem=dividend%divisor;
        dividend=divisor;
        divisor=rem;
    }
    printf("\nGCD=%d\n", dividend);
 }
