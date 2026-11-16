#include <stdio.h>

int main()
{
    int number, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number > 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if (original == reverse)
        printf("%d is a palindrome number.", original);
    else
        printf("%d is not a palindrome number.", original);

    return 0;
}