#include <stdio.h>

// program to print the factors in given range
void main()
{
    int start, end;
    printf("Enter a range starting from : ");
    scanf("%d", &start);
    printf("Enter the ending : ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        printf("%d = ", i);
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

// find the power of any given number
void main()
{
    int base, power, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &power);

    for (int i = 1; i <= power; i++)
    {
        result = result * base;
    }
    printf("%d^%d = %d", base, power, result);
}