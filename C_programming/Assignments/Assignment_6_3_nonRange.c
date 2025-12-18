#include <stdio.h>

/* -------- NON-RANGE PROGRAMS -------- */

/* No parameter, No return */
void checkPrime()
{
    int n = 7, i = 2, flag = 1;

    while (i < n)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag)
        printf("Prime Number\n");
    else
        printf("Not Prime Number\n");
}

/* No parameter, Return value */
int isPerfect()
{
    int n = 6, sum = 0, i = 1;

    while (i < n)
    {
        if (n % i == 0)
            sum += i;
        i++;
    }

    return (sum == n);
}

/* With parameter, No return */
void checkArmstrong(int n)
{
    int temp = n, sum = 0;

    while (n > 0)
    {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }

    if (sum == temp)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
}

/* With parameter, Return value */
int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int isStrong(int n)
{
    int temp = n, sum = 0;

    while (n > 0)
    {
        int d = n % 10, fact = 1, i = 1;
        while (i <= d)
        {
            fact *= i;
            i++;
        }
        sum += fact;
        n /= 10;
    }

    return (sum == temp);
}

int isPalindrome(int n)
{
    int rev = 0, temp = n;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return (rev == temp);
}

int sumFirstLast(int n)
{
    int last = n % 10, first;

    while (n != 0)
    {
        first = n % 10;
        n /= 10;
    }

    return first + last;
}
int main()
{
    checkPrime();
    printf("-------------------------\n");

    checkArmstrong(153);
    printf("-------------------------\n");

    if (isPerfect())
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");

    printf("-------------------------\n");

    printf("Factorial = %d\n", factorial(5));
    printf("-------------------------\n");

    if (isStrong(145))
        printf("Strong Number\n");
    else
        printf("Not Strong Number\n");

    printf("-------------------------\n");

    if (isPalindrome(121))
        printf("Palindrome Number\n");
    else
        printf("Not Palindrome Number\n");

    printf("-------------------------\n");

    printf("Sum = %d\n", sumFirstLast(1234));

    return 0;
}
