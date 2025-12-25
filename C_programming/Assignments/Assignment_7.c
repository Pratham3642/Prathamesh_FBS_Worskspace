#include <stdio.h>

// //swapping using pointer
// int swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void main()
// {
//     int a = 10, b = 20;

//     printf("Before swapping\n a = %d, b = %d \n", a, b);
//     swap(&a, &b);
//     printf("After swapping\n a = %d, b = %d", a, b);
// }

// check and modify the character
void checkAndModify(char *);
void main()
{
    char ch = 'b';
    char *p = &ch;
    checkAndModify(p);
    printf("\nAfter function call, character = %c", ch);
}

void checkAndModify(char *ch)
{
    if (*ch >= 'a' && *ch <= 'z')
    {
        printf("Lowercase letter");
        *ch = *ch - 32;
    }
    else
    {
        printf("Uppercase letter");
    }
}
