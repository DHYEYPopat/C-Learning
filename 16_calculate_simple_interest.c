#include <stdio.h>

int main()
{
    float p, r, n, interest;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter number of years: ");
    scanf("%f", &n);

    interest = (p * r * n) / 100;

    printf("Simple Interest = %.2f", interest);

    return 0;
}