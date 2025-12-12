#include <stdio.h>

// Program to print numbers from 1 to 100 using a while loop
void main()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }
}

// write a program to calculate the sum of digits of a number using while loop
void main()
{
    int i, sum = 0, num = 1234;
    while (i > 0)
    {
        i = num % 10;
        sum = sum + i;
        num = num / 10;
    }
    printf("Sum of digits: %d\n", sum);
}

// write a program to print even numbers from 1 to 100 using while loop
void main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}

// write a program to print prime no. from 1 to 100 using while loop
void main()
{
    int i, flag, num = 2;
    while (num <= 100)
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

// Program to check if a number is a palindrome or not
void main()
{
    int num, reverse_num = 0, last_digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;

    while (num > 0)
    {
        last_digit = num % 10;
        reverse_num = reverse_num * 10 + last_digit; // last digit
        num = num / 10;                              // remove last digit
    }
    printf("Reversed Number: %d\n", reverse_num);
    if (temp == reverse_num)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
}

// print numbers from 1 to 100 using for loop
void main()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
}

// calculate sum of digits of a number using for loop
void main()
{
    int sum = 0, digit;
    for (int n = 12345; n > 0; n = n / 10)
    {
        digit = n % 10;
        sum = sum + digit;
    }
    printf("Sum of digits: %d\n", sum);
}

// print factorial of a number using for loop
void main()
{
    int n = 5, fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf(" %d", fact);
}