#include <stdio.h>

// pattern = 1+11+111+1111+...n terms
void main()
{
    int term = 0, i, n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        term = term * 10 + 1;
        printf("%d", term);
        if (i < n)
        {
            printf(" + ");
        }
    }
}