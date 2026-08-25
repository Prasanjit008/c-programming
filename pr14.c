// Coversition of meter to KM & Meter  //

#include <stdio.h>

void main() 
{
    int total_meters, km, remaining_meters;

    printf("Enter the distance in meters: ");
    scanf("%d", &total_meters);

    km = total_meters / 1000;
    remaining_meters = total_meters % 1000;

    printf("\n%d meters is equal to: %d km and %d meters\n", total_meters, km, remaining_meters);
}
