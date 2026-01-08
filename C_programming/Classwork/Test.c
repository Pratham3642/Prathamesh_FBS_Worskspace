#include <stdio.h>

char *concat(char dest[], char src[]);

void stringCopy(char dest[], char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void main()
{
    char src[50], dest[50];
    printf("Enter the source string: ");
    gets(src);
    stringCopy(dest, src);
    // printf("Copid : %s", dest);
    printf("Concatenated String: %s", concat(dest, src));
}

char *concat(char dest[], char src[])
{
    int n = 0;
    while (dest[n] != '\0')
        n++;

    int j = n, i = 0;
    while (src[i] != '\0')
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';

    return dest;
}