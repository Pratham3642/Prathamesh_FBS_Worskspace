#include <stdio.h>

void alternateAdd(int, int);
void printEven(int, int);
void printOdd(int, int);
int main()
{
    int start, end;
    printf("Enter Start: ");
    scanf("%d", &start);
    printf("Enter End: ");
    scanf("%d", &end);

    printEven(start, end);
    printOdd(start, end);
    alternateAdd(start, end);
}

void printEven(int start, int end)
{
    printf("Even Numbers\n");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void printOdd(int start, int end)
{
    printf("Odd Numbers\n");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void alternateAdd(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i += 2)
    {
        sum += i;
    }
    printf("Sum = %d ", sum);
}