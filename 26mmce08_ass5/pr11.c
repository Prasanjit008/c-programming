//To display the Fibonacci series up to the nth term.


   #include <stdio.h>
   void main()
 {
    int f0=0, f1=1, f2, n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n==1)
        printf("%d ", f0);
    else
    {
        if(n==2)
            printf("%d %d ", f0,f1);
        else
        {
            if(n>2)
            {
                printf("%d %d ", f0,f1);
                for(i=1;i<=n-2;i++)
                {
                    f2=f0+f1;
                    printf("%d ", f2);
                    f0=f1;
                    f1=f2;
                }
            }
        }
    }
 }


