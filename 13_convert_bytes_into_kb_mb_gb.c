#include <stdio.h>

int main()
{
    float bytes, kb, mb, gb;

    printf("Enter size in bytes: ");
    scanf("%f", &bytes);

    kb = bytes / 1024;
    mb = bytes / (1024 * 1024);
    gb = bytes / (1024 * 1024 * 1024);

    printf("Kilobytes = %.2f KB\n", kb);
    printf("Megabytes = %.2f MB\n", mb);
    printf("Gigabytes = %.2f GB\n", gb);

    return 0;
}