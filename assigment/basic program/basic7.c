#include<stdio.h>
#include<conio.h>
void main()
{
    float C,F;

    printf(" Enter tem. in Celsius :");
    scanf("%f",&C);
    F=((9/5.0) * C) + 32;
    printf(" Tem. in Fahrenheit :%.2f",F);
}

