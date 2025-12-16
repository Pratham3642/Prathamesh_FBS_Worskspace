#include <stdio.h>
/* ------------------------- 3. No argument, return value --------------------- */

// check whether a three-digit number is a palindrome
int isPalindrome()
{
    int num = 121, reverse_num, a, b, c;
    printf("Number = %d\n", num);
    a = num % 10;        // last digit
    b = (num / 10) % 10; // middle digit
    c = num / 100;       // first digit
    reverse_num = a * 100 + b * 10 + c;

    if (num == reverse_num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    if (isPalindrome())
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Is not a palindrome number");
    }
}