 // sum of given series //

   #include<stdio.h>
   void main()
  {
	  int n,i,fact=1;
	  float sum=0.0;

	  printf("Enter n: ");
	  scanf("%d",&n);

	  for(i=1;i<=n;i++)
	  {
		  fact=fact*i;
		  sum=sum+(float)1/fact;
	  }

	  printf("Sum of serie is = %f\n",sum);
  }
