// grade of the student //

#include <stdio.h>

void main()
{
    float m1, m2, m3, average;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    average = (m1 + m2 + m3) / 3;

    printf("Average Mark = %.2f\n", average);

    if (average >= 90)
    {
        printf("Grade = O");
    }
    else if (average >= 80)
    {
        printf("Grade = E");
    }
    else if (average >= 70)
    {
        printf("Grade = A");
    }
    else if (average >= 60)
    {
        printf("Grade = B");
    }
    else if (average >= 50)
    {
        printf("Grade = C");
    }
    else if (average >= 40)
    {
        printf("Grade = D");
    }
    else
    {
        printf("Grade = F");
    }

   
}
