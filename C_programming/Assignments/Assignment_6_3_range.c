#include <stdio.h>

/* -------- RANGE PROGRAMS -------- */

/* No parameter, No return */
void print1to10()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

/* With parameter, No return */
void printMultiples(int n)
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", n * i);
        i++;
    }
    printf("\n");
}

/* With parameter, No return */
void sumRange(int start, int end)
{
    int sum = 0;
    while (start <= end)
    {
        sum += start;
        start++;
    }
    printf("Sum = %d\n", sum);
}

int main()
{
    print1to10();
    printf("----------------------------\n");
    printMultiples(5);
    printf("----------------------------\n");
    sumRange(1, 5);

    return 0;
}
