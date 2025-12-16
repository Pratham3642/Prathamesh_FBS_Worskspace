#include <stdio.h>
#include <math.h>

/* Without parameter, without return */

void printArmstrong()
{
    int n, i, temp, sum, digit, power;
    printf("Enter range for Armstrong: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        temp = i;
        power = 0;

        while (temp > 0)
        {
            power++;
            temp /= 10;
        }

        temp = i;
        sum = 0;
        while (temp > 0)
        {
            digit = temp % 10;
            sum += (int)(pow(digit, power) + 0.5);
            temp /= 10;
        }

        if (sum == i)
            printf("%d\n", i);
    }
}

void printPrimes()
{
    int n, num = 2, i, flag;
    printf("Enter range for Prime: ");
    scanf("%d", &n);

    while (num <= n)
    {
        flag = 0;
        i = 2;

        while (i < num)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }

        if (flag == 0)
            printf("%d\n", num);

        num++;
    }
}

int main()
{
    printArmstrong();
    printf("-------------------------\n");

    printPrimes();

    return 0;
}
