#include <stdio.h>

int main()
{
    int amount;

    printf("Enter amount: ");
    scanf("%d", &amount);

    while (amount > 0)
    {
        if (amount >= 500)
        {
            printf("500 = %d\n", amount / 500);
            amount %= 500;
        }
        else if (amount >= 200)
        {
            printf("200 = %d\n", amount / 200);
            amount %= 200;
        }
        else if (amount >= 100)
        {
            printf("100 = %d\n", amount / 100);
            amount %= 100;
        }
        else if (amount >= 50)
        {
            printf("50 = %d\n", amount / 50);
            amount %= 50;
        }
        else if (amount >= 20)
        {
            printf("20 = %d\n", amount / 20);
            amount %= 20;
        }
        else if (amount >= 10)
        {
            printf("10 = %d\n", amount / 10);
            amount %= 10;
        }
        else if (amount >= 5)
        {
            printf("5 = %d\n", amount / 5);
            amount %= 5;
        }
        else if (amount >= 2)
        {
            printf("2 = %d\n", amount / 2);
            amount %= 2;
        }
        else
        {
            printf("1 = %d\n", amount);
            amount = 0;
        }
    }

    return 0;
}
