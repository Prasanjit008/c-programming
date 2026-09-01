// restaurant charges //

  #include <stdio.h>
  int main() 
  {
    float amount, gst, discount = 0, finalAmount;

    printf("Enter total price of food order: ");
    scanf("%f", &amount);

    gst = amount * 0.12;
    amount = amount + gst;
    discount = (amount > 1000) ? (amount * 0.05) : 0;
    finalAmount = amount - discount;

    printf("Amount after GST = %f\n", amount);
    printf("Discount applied = %f\n", discount);
    printf("Final amount payable = %f\n", finalAmount);

   }  