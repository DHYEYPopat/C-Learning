#include <stdio.h>

int main()
{
    float a, b, quotient;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b != 0)
    {
        quotient = a / b;
        printf("Division = %.2f", quotient);
    }
    else
    {
        printf("Division by zero is not possible.");
    }

    return 0;
}
