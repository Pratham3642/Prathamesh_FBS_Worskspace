#include <stdio.h>

void main()
{
    int last_digit, n = 123, sum = 0;
    int temp = n;
    while (temp > 0)
    {
        last_digit = temp % 10;
        sum = digit * digit * digit;
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("Armstrong");
    }
    else
    {
        printf("not a armstrong");
    }
}
