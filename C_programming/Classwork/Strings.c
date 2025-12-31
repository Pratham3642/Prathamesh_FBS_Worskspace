#include <stdio.h>

int main()
{
    char str[10];
    int i = 0;
    char ch;

    printf("Enter a string: ");

    while (i < 9)
    {
        scanf("%c", &ch);

        if (ch == '\n')
            break;

        str[i] = ch;
        i++;
    }

    str[i] = '\0'; // end string

    printf("Given string is: %s", str);
    return 0;
}
