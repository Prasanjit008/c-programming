 // number is armstrong or not //


  #include<stdio.h>
  #include<math.h>
  void main()
  {
          int n,temp,digit,new,sum=0,count=0;

          printf("Enter any number: ");
          scanf("%d",&n);

          temp=n;
          new=n;

          while(n>0)
          {
                  digit = n%10;
                  n=n/10;
		  count=count+1;
           }

	  while(temp>0)
	  {
      		  sum=sum+pow(temp%10,count);
		  temp=temp/10;
          }

          if(sum==new)
	  {
		  printf("%d is an armstrong number.\n",new);
	  }
	  else
	  {
		  printf("%d is not an armstrong number.\n",new);
	  }

        

  }

