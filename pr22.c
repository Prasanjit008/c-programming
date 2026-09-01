// bill //

  #include <stdio.h>
  int main() 
  {
   float price1, price2, price3;
   int qty1, qty2, qty3;
   float total, tax, grandTotal;

   printf("Enter price of product 1: ");
   scanf("%f", &price1);
   printf("Enter Quantity of product 1: ");
   scanf("%d",&qty1);

   printf("Enter price of product 2: ");
   scanf("%f", &price2);
   printf("Enter Quantity of product 2: ");
   scanf("%d",&qty2);

   printf("Enter price of product 3: ");
   scanf("%f", &price3);
   printf("Enter Quantity of product 3: ");
   scanf("%d",&qty3);


   total = (price1 * qty1) + (price2 * qty2) + (price3 * qty3);
   tax = total * 0.10;
   grandTotal = total + tax;
   
   printf("Total bill before tax = %f\n", total);
   printf("Tax = %f\n", tax);
   printf("Total amount to be paid = %f\n", grandTotal);

}
