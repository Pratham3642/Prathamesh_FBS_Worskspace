#include <stdio.h>

int isEven(int n)
{
    return n % 2 == 0;
}

int isPalindrome(int n)
{
    int temp = n, rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main()
{
    printf(isEven(9) ? "Even\n" : "Odd\n");
    printf("-------------------------\n");

    printf(isPalindrome(121) ? "Palindrome\n" : "Not Palindrome\n");
    printf("-------------------------\n");

    printf(isVowel('E') ? "Vowel\n" : "Consonant\n");

    return 0;
}
