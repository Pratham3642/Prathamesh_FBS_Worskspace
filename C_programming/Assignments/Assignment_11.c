#include <stdio.h>

/* String Copy */
char *mystrcpy(char *dest, const char *src)
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

/* String Copy (n characters) */
char *mystrncpy(char *dest, const char *src, int n)
{
    int i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // safe termination
    return dest;
}

/* String Length */
int mystrlen(const char *str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

/* String Concatenation */
char *mystrcat(char *dest, const char *src)
{
    int i = mystrlen(dest);
    int j = 0;

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

char *mystrncat(char *dest, const char *src, int n)
{
    int i = mystrlen(dest);
    int j = 0;

    while (src[j] != '\0' && n > 0)
    {
        dest[i] = src[j];
        i++;
        j++;
        n--;
    }
    dest[i] = '\0';
    return dest;
}

/* String Compare */
int mystrcmp(const char *dest, const char *src)
{
    while (*dest != '\0' && *src != '\0')
    {
        if (*dest != *src)
            return *dest - *src;

        dest++;
        src++;
    }
    return *dest - *src;
}

int mystrncmp(const char *dest, const char *src, int n)
{
    while (*dest != '\0' && *src != '\0' && n > 0)
    {
        if (*dest != *src)
            return *dest - *src;

        dest++;
        src++;
        n--;
    }
    if (n == 0)
        return 0;

    return *dest - *src;
}

void mystrupper(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

void mystrlower(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

void mystrrev(char *str)
{
    char *start = str;
    char temp;
    char *end = str;
    while (*end)
    {
        end++;
    }
    end--;
    // end-- is used because the pointer reaches '\0'
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

char *mystrstr(char *str, char *sub)
{
    char *p1, *p2;
    while (*str)
    {
        p1 = str;
        p2 = sub;
        while (*p1 && *p2 && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0')
        {
            return str;
        }
        str++;
    }
    return NULL;
}

char *mystrnstr(char *str, char *sub, int n)
{
    char *p1, *p2;
    while (*str && n > 0)
    {
        p1 = str;
        p2 = sub;
        int remaining = n;
        while (*p1 && *p2 && *p1 == *p2 && remaining > 0)
        {
            p1++;
            p2++;
            remaining--;
        }
        if (*p2 == '\0')
        {
            return str;
        }
        str++;
        n--;
    }
    return NULL;
}

int mystrcasecmp(char *s1, char *s2)
{
    char c1, c2;
    while (*s1 && *s2)
    {
        c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1;
        c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;
        if (c1 != c2)
        {
            return c1 - c2;
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int mystrncasecmp(char *s1, char *s2, int n)
{
    char c1, c2;
    while (*s1 && *s2 && n > 0)
    {
        c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1;
        c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;
        if (c1 != c2)
        {
            return c1 - c2;
        }
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
        return 0;
    return *s1 - *s2;
}

char *mystrchr(char *str, char ch)
{
    while (*str)
    {
        if (*str == ch)
        {
            return str;
        }
        str++;
    }
    return NULL;
}

char *mystrrchr(char *str, char ch)
{
    char *last = NULL;
    while (*str)
    {
        if (*str == ch)
        {
            last = str;
        }
        str++;
    }
    return last;
}

/* Main Function */
int main()
{
    char src[50] = "hello";
    char dest[100] = "world";
    char copy[50];

    printf("Source String     : %s\n", src);
    printf("Destination String: %s\n\n", dest);

    printf("Concatenation     : %s\n", mystrcat(dest, src));
    printf("String Copy       : %s\n", mystrcpy(copy, src));
    printf("N Copy (3 chars)  : %s\n", mystrncpy(copy, src, 3));
    printf("String Length     : %d\n", mystrlen(src));
    printf("String Compare    : %d\n", mystrcmp(dest, src));
    char str1[] = "abcd";
    char str2[] = "abcdef";
    printf("N Compare (3 chars): %d\n", mystrncmp(str1, str2, 3));
    mystrupper(src);
    printf("Uppercase Source  : %s\n", src);
    mystrlower(src);
    printf("Lowercase Source  : %s\n", src);

    mystrrev(src);
    printf("Reversed Source   : %s\n", src);
    mystrrev(src);

    char *substr = "lo";
    char *result = mystrstr(src, substr);
    if (result)
        printf("Substring '%s' found at position: %ld\n", substr, result - src);
    else
        printf("Substring '%s' not found\n", substr);

    char *substr2 = "he";
    char *result2 = mystrnstr(src, substr2, 2);
    if (result2)
        printf("N Substring '%s' found at position: %ld\n", substr2, result2 - src);
    else
        printf("N Substring '%s' not found\n", substr2);

    char str3[] = "Hello";
    char str4[] = "hello";
    printf("Case Insensitive Compare: %d\n", mystrcasecmp(str3, str4));

    char ch = 'e';
    char *charPos = mystrchr(src, ch);
    if (charPos)
        printf("Character '%c' found at position: %ld\n", ch, charPos - src);
    else
        printf("Character '%c' not found\n", ch);

    char ch2 = 'l';
    char *charPos2 = mystrrchr(src, ch2);
    if (charPos2)
        printf("Last occurrence of character '%c' found at position: %ld\n", ch2, charPos2 - src);
    else
        printf("Character '%c' not found\n", ch2);

    char dest2[100] = "Good";
    char src2[] = "Morning";
    printf("N Concatenation (3 chars): %s\n", mystrncat(dest2, src2, 3));

    char str5[] = "HeLLoWorld";
    char str6[] = "helloThere";
    printf("N Case Insensitive Compare (5 chars): %d\n", mystrncasecmp(str5, str6, 5));

    return 0;
}
