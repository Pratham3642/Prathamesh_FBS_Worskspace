#include <stdio.h>

// print numbers from 1 to 10
void main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
}

// print the first 10 multiples of 5
void main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d ", i * n);
        i++;
    }
}

// calculate the sum of numbers from 1 to 5
void main()
{
    int sum = 0, start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    while (start <= end)
    {
        sum = sum + start;
        start++;
    }
    printf("%d", sum);
}

// check if a number is prime or not
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 2, isPrime = 1;
    while (i <= n)
    {
        if (n % 2 == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }
    if (isPrime == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}

// check if a number is Armstrong or not
void main()
{
    int n, armst = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        int digit = n % 10;
        armst = armst + (digit * digit * digit);
        n = n / 10;
    }
    if (armst == temp)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}

// check if a number is Perfect or not
void main()
{
    // perfect number = sum its proper divisors equal the number itself
    // example 6 = 1 + 2 + 3
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    if (sum == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
}

// calculate the factorial of a number
void main()
{
    int n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        factorial = factorial * n;
        n--;
    }
    printf("%d", factorial);
}

// check if a number is Strong or not
void main()
{
    // strong number = sum of factorial of each digit equal the number itself
    // example 145 = 1! + 4! + 5! = 145
    int n, sum = 0, factorial;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        int digit = n % 10;
        factorial = 1;
        int i = 1;
        while (i <= digit)
        {
            factorial = factorial * i;
            i++;
        }
        sum = sum + factorial;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }
}

// check if a number is a palindrome or not
void main()
{
    // reads same backward as forward
    // example 121, 1331
    int n, reverse = 0, last_digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n = n / 10;
    }
    if (temp == reverse)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
}

// calculate the sum of first and last digit of a number
void main()
{
    int sum = 0, first, last, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    while (n != 0)
    {
        first = n % 10;
        n = n / 10;
    }
    printf("%d", first + last);
}