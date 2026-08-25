// Calculation of Hour,Minute & Second //

#include<stdio.h>

void main()
{
    int sec,h,m;
    printf("Enter the time value in second: ");
    scanf("%d",&sec);
    h= sec/3600;
    m=(sec%3600)/60;
    sec=(sec%3600)%60;
    printf("\n%d hour %d minute %d second",h,m,sec);
}