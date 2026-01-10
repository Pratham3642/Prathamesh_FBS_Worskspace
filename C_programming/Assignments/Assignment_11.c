#include <stdio.h>

char *mystrcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *mystrncpy(char *dest, char *src, int n)
{
    int i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int mystrlen(char *str)
{
    int count = 0, i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

char *mystrcat(char *dest, char *src)
{

    int i, j = 0, n = mystrlen(dest);
    for (i = n; src[j] != '\0'; i++)
    {
        dest[i] = src[j];
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int mystrcmp(char *dest, char *src)
{
    while (*dest == '\0' && *src == '\0')
    {
        if (*src != *dest)
        {
            return *dest - *src;
        }
        dest++;
        src++;
    }
    return *dest - *src;
}

void main()
{
    char src[50] = "hello";
    char dest[50] = "world";
    char str[50];
    printf("Concatination of string : %s\n", mystrcat(src, dest));
    printf("copy of string : %s\n", mystrcpy(str, src));
    printf("n copy of string : %s\n", mystrncpy(str, src, 3));
    printf("length of string : %d\n", mystrlen(dest));
    printf("Compare string : %d\n", mystrcmp(dest, src));
}