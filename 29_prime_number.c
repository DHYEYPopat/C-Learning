
#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Not a prime number.");
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }

        if (i == num)
        {
            printf("Prime number.");
        }
        else
        {
            printf("Not a prime number.");
        }
    }

    return 0;
}
