#include <stdio.h>

/* Argument, Return value */

int calculator(int a, int b, char op)
{
    if (op == '+')
        return a + b;
    if (op == '-')
        return a - b;
    if (op == '*')
        return a * b;
    if (op == '/' && b != 0)
        return a / b;
    return 0;
}

float finalPrice(float price, char user)
{
    float discount = 0;

    if (user == 'y')
    {
        if (price >= 500)
            discount = 0.20;
        else
            discount = 0.10;
    }
    else
    {
        if (price >= 600)
            discount = 0.15;
    }

    return price - (price * discount);
}

int main()
{
    printf("Calculator Result = %d\n", calculator(10, 5, '+'));
    printf("---------------------------------\n");
    printf("Final Price = %.2f\n", finalPrice(600, 'y'));
    return 0;
}
