#include <stdio.h>
#include <math.h>

// Print Armstrong numbers from 1 to n using while loop
int main()
{
    int last_digit, temp, sum, n, i, power;
    printf("Enter a range: ");
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
            last_digit = temp % 10;
            sum += (int)(pow(last_digit, power) + 0.5);
            temp /= 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
}

// Print prime numbers from 1 to n using while loop
void main()
{
    int i, flag, num = 2, n;
    printf("Enter a range: ");
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
        {
            printf("%d\n", num);
        }
        num++;
    }
}

// Print perfect numbers in the given range 1 to n.
int main()
{
    // perfect number = sum its proper divisors equal the number itself
    // example 6 = 1 + 2 + 3
    int n, sum, i, j;
    printf("Enter a range: ");
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        sum = 0;
        for (i = 1; i <= j / 2; i++)
        {
            if (j % i == 0)
            {
                sum += i;
            }
        }
        if (sum == j)
        {
            printf("%d\n", j);
        }
    }
}

// Print Strong numbers in the given range 1 to n.
int main()
{
    // Sum of factorials of its digits = the number itself

    int n, fact, sum, temp, i, digit;
    printf("Enter a range: ");
    scanf("%d", &n);
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
        {
            printf("%d\n", i);
        }
    }
}

// Menu driven program to perform various operations on a number
int main()
{
    int num, choice, i, temp, rev, digit, sum, flag;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMENU\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) // Even or Odd
    {
        if (num % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    else if (choice == 2) // Prime or Not
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

    else if (choice == 3) // Palindrome or Not
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

    else if (choice == 4) // Positive, Negative or Zero
    {
        if (num > 0)
            printf("Positive Number");
        else if (num < 0)
            printf("Negative Number");
        else
            printf("Zero");
    }

    else if (choice == 5) // Reverse Number
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

    else if (choice == 6) // Sum of Digits
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

    return 0;
}
