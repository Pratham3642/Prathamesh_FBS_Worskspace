#include <stdio.h>

/*
    getVowelCount()
    Similar idea to using:
    -> checking each character like looping with strlen() + strchr()
*/
int getVowelCount(char[]);

/*
    readString()
    Custom implementation of string input
    Similar to:
    -> gets() / fgets() / scanf("%s")
*/
void readString(char[]);

/*
    findCharAt()
    Logic is similar to:
    -> strchr(string, character)
    It returns the ADDRESS of the found character
*/
char *findCharAt(char *, char);

int main()
{
    char str[10];

    // Reads string character by character (like fgets)
    readString(str);

    printf("Given string is: %s\n", str);

    // Counts vowels using traversal (like strlen + strchr)
    printf("Total vowels : %d\n", getVowelCount(str));

    char find;
    printf("Enter character to find = ");

    // Reads a single character
    scanf("%c", &find);

    /*
        findCharAt(str, find) returns address of found character
        Subtracting base address (str) gives index
        Similar to:
        -> strchr(str, ch) - str
    */
    printf("Found At: %d\n", findCharAt(str, find) - str);

    return 0;
}

void readString(char str[])
{
    int i = 0;
    char ch;

    printf("Enter a string: ");

    /*
        Loop reads characters one by one
        Similar to how:
        -> gets() or fgets() internally reads characters
    */
    while (i < 9)
    {
        scanf("%c", &ch);

        // Stops reading when Enter key is pressed
        if (ch == '\n')
            break;

        // Stores character in string array
        str[i] = ch;
        i++;
    }

    // Adds null character at end (string termination)
    // Same as done by strcat(), strcpy(), fgets()
    str[i] = '\0';
}

int getVowelCount(char str[])
{
    int i = 0, vowelcount = 0;

    /*
        Traverses string until '\0'
        Similar to how strlen() works internally
    */
    while (str[i] != '\0')
    {
        char ch = str[i];

        /*
            Checks if character exists in "aeiouAEIOU"
            This logic is SAME as:
            -> strchr("aeiouAEIOU", ch)
        */
        if (findCharAt("aeiouAEIOU", ch))
        {
            vowelcount++;
        }
        i++;
    }

    // Returns total number of vowels
    return vowelcount;
}

char *findCharAt(char *str, char ch)
{
    int i = 0;

    /*
        Traverses string character by character
        Similar internal logic of:
        -> strchr()
    */
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            // Returns address of matched character
            return &str[i];
        }
        i++;
    }

    // Returns NULL if character not found
    return '\0';
}
