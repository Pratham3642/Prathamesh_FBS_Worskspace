#include <stdio.h>

// find whether a number is even or odd
void main()
{
    int num = 9;
    if (num % 2 == 0)
    {
        printf("%d is an even number", num);
    }
    else
    {
        printf("%d is an odd number", num);
    }
}

// check whether a three-digit number is a palindrome
void main()
{
    int num = 121, reverse_num, a, b, c;

    a = num % 10;        // last digit
    b = (num / 10) % 10; // middle digit
    c = num / 100;       // first digit
    reverse_num = a * 100 + b * 10 + c;

    if (num == reverse_num)
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is not a palindrome number", num);
    }
}

// Check whether a year is leap year or not
void main()
{
    int year = 2020;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

// check whether a character is a vowel or consonant
void main()
{
    char ch = 'E';
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a vowel", ch);
    }
    else
    {
        printf("%c is a consonant", ch);
    }
}

// check whether a person is eligible to vote
void main()
{
    int age = 12;
    if (age >= 18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }
}

// check whether a given character is uppercase or lowercase
void main()
{
    char ch = 'L';
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase Letter");
    }
    else
    {
        printf("Uppercase Letter");
    }
}

// calculate the total salary of an employee based on basic salary
void main()
{
    int basic = 4000, da, ta, hra;
    if (basic <= 5000)
    {
        da = basic * 0.1;
        ta = basic * 0.2;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.1;
        ta = basic * 0.2;
        hra = basic * 0.25;
    }
    int total_salary = basic + da + ta + hra;
    printf("DA: %d\nTA: %d\nHRA: %d\n", da, ta, hra);
    printf("Total Salary: %d", total_salary);
}