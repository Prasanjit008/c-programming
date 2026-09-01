// income tax //

  #include <stdio.h>
  void main() 
  {
   int income;
   float tax;

   printf("Enter income: ");
   scanf("%d", &income);

   if (income <= 150000)
     tax = 0.0;
   if (income > 150000 && income <= 300000)
     tax = 0.1 * income;
   if (income > 300000 && income <= 500000)
     tax = 0.2 * income;
   if (income > 500000)
     tax = 0.3 * income;

   printf("Income Tax = %.2f\n", tax);

}
