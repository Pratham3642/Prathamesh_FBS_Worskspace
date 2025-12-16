#include <stdio.h>

/* ---------------------- 2. Argument, no return --------------------- */

// declaration
void checkVowels(char);
void checkCase(char);

void main()
{
    checkVowels('L');
    printf("\n");
    printf("---------------------------\n");
    checkCase('b');
}
// check whether a character is a vowel or consonant
void checkVowels(char ch)
{
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

// check whether a given character is uppercase or lowercase
void checkCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase Letter");
    }
    else
    {
        printf("Uppercase Letter");
    }
}
