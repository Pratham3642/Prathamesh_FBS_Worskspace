#include <stdio.h>

/* With parameter, without return */

void printPerfect(int n)
{
    int sum, i, j;

    for (j = 1; j <= n; j++)
    {
        sum = 0;
        for (i = 1; i <= j / 2; i++)
        {
            if (j % i == 0)
                sum += i;
        }

        if (sum == j)
            printf("%d\n", j);
    }
}

void printStrong(int n)
{
    int fact, sum, temp, i, digit;

    for (i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            fact = 1;

            for (int j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == i)
            printf("%d\n", i);
    }
}

void menu(int num)
{
    int choice, i, temp, rev, digit, sum, flag;

    printf("\nMENU\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        if (num % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    else if (choice == 2)
    {
        flag = 1;

        if (num <= 1)
            flag = 0;
        else
        {
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1)
            printf("Prime Number");
        else
            printf("Not a Prime Number");
    }

    else if (choice == 3)
    {
        temp = num;
        rev = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }

        if (rev == num)
            printf("Palindrome Number");
        else
            printf("Not a Palindrome Number");
    }

    else if (choice == 4)
    {
        if (num > 0)
            printf("Positive Number");
        else if (num < 0)
            printf("Negative Number");
        else
            printf("Zero");
    }

    else if (choice == 5)
    {
        temp = num;
        rev = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }

        printf("Reversed Number = %d", rev);
    }

    else if (choice == 6)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        printf("Sum of Digits = %d", sum);
    }

    else
    {
        printf("Invalid Choice");
    }
}

int main()
{
    printPerfect(100);
    printf("-------------------------\n");

    printStrong(500);
    printf("-------------------------\n");

    menu(121);

    return 0;
}
