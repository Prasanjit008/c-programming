//smallest between three inputted numbers //

  #include <stdio.h>
  int main() 
  {
    int a, b, c, small;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a<b && a<c)
    {
        printf("%d is the smallest number.\n",a);
    }
   else
   {
      if(b<a && b<c)
      {
        printf("%d is the smallest number.\n",b);
      }
      else
        printf("%d is the smallest number.\n",c);
   }

}
