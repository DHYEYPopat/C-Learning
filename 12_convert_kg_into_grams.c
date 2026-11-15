#include <stdio.h>

int main()
{
    float kilograms, grams;

    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);

    grams = kilograms * 1000;

    printf("Weight in grams = %.2f", grams);

    return 0;
}