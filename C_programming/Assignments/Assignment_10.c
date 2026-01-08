#include <stdio.h>
#include <string.h>

void main()
{
    char s1[50] = "Hello";
    char s2[50] = "World";
    char s3[50];
    char s4[50] = "Hello World";
    char s5[50] = "abcde12345";
    char *ptr;

    // length of string
    printf("Length of the string : %d\n", strlen(s1));

    strcpy(s3, s1);
    printf("String of copy : %s\n", s3);

    strncpy(s3, s1, 3);
    printf("Copy of N string : %s\n", s3);

    strcat(s1, s2);
    printf("Concate of string : %s\n", s1);

    strncat(s1, s2, 3);
    printf("Conatination of n string : %s\n", s1);

    printf("String comparsion : %d\n", strcmp("abc", "abc"));
    printf("String comparsion : %d\n", strncmp("abc", "abd", 2));

    ptr = strchr(s4, 'w');
    if (ptr)
        printf("Find the chr : %s\n", ptr);

    ptr = strrchr(s4, 'l');
    if (ptr)
        printf("Find the char from behind : %s\n", ptr);

    ptr = strstr(s4, "world");
    if (ptr)
        printf("str in str:%s\n", ptr);

    char token[50] = "one,two,three";
    ptr = strtok(token, ",");
    while (ptr != NULL)
    {
        printf("Token is : %s\n", ptr);
        ptr = strtok(NULL, ",");
    }

    printf("strspn: %lu\n", strspn(s5, "abcde"));
    printf("strcspn: %lu\n", strcspn(s5, "123"));

    ptr = strpbrk(s5, "123");
    if (ptr)
        printf("strpbrk: %s\n", ptr);
}