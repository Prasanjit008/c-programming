// grade of the student //

#include <stdio.h>
int main() 
{
  float m1, m2, m3, avg;

  printf("Enter marks of 3 subjects: ");
  scanf("%f %f %f", &m1, &m2, &m3);

  avg = (m1 + m2 + m3) / 3;

  if (avg >= 90)
    printf("Grade: O\n");
  if (avg >= 80 && avg < 90)
    printf("Grade: E\n");
  if (avg >= 70 && avg < 80)
    printf("Grade: A\n");
  if (avg >= 60 && avg < 70)
    printf("Grade: B\n");
  if (avg >= 50 && avg < 60)
    printf("Grade: C\n");
  if (avg >= 40 && avg < 50)
    printf("Grade: D\n");
  if (avg < 40)
    printf("Grade: F\n");
}
