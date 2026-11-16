
#include <stdio.h>

int main()
{
    int num, i, count;

    printf("Prime numbers between 1 and 500 are:\n");

    for (num = 2; num <= 500; num++)
    {
        count = 0;

        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
