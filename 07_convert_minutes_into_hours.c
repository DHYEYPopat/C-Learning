#include <stdio.h>

int main()
{
    float minutes, hours;

    printf("Enter time in minutes: ");
    scanf("%f", &minutes);

    hours = minutes / 60;

    printf("Time in hours = %.2f", hours);

    return 0;
}