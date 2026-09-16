// number is palindrome or not //
 

  #include<stdio.h>
  void main()
  {
	  int n,temp,digit,rev=0;

	  printf("Enter any number: ");
	  scanf("%d",&n);
          
	  temp=n;

	  while(n>0)
	  {
		  digit = n%10;
		  rev=rev*10+digit;
		  n=n/10;
	  }

	  if(n==rev)
	  {
		  printf("%d is a palindrome number.\n",temp);
	  }
	  else
	  {
		  printf("%d is not a palindrome number.\n",temp);
	  }

  }  
