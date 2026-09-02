// bill calculation //
  #include <stdio.h>
  int main() 
  {
   int prev, curr, total_units;
   float bill_amt;

   printf("Enter previous meter reading: ");
   scanf("%d", &prev);
   printf("Enter current meter reading: ");
   scanf("%d", &curr);

   total_units = curr - prev;
   if (total_units <= 100)
   bill_amt = total_units * 3.20;
   else 
   {
     if (total_units > 100 && total_units <= 300)
     bill_amt = 320 + (total_units - 100) * 5.40;
    else
    bill_amt = 320 + 1080 + (total_units - 300) * 6;
   }
   printf("Units consumed = %d\n", total_units);
   printf("Electric bill = Rs %.2f\n", bill_amt);

  }
