// Find factorial of a num.
#include<stdio.h>

int main()
{
	int num, fact = 1,ref;
        
	printf("Enter any positive num : ");
	scanf("%d", &num);
          
        ref=num;	

	while (num > 1)
		fact *= num--;
	
	printf("Factorial of %d is : %d", ref,fact);
}

