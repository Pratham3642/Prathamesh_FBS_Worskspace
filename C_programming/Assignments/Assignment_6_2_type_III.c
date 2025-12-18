

#include <stdio.h>

/* --------------------Argument, No return----------------------- */

void checkTriangle(int a, int b, int c)
{
    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || c == a)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
}

void checkDivisibility(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else if (num % 3 == 0)
        printf("Divisible by 3\n");
    else if (num % 5 == 0)
        printf("Divisible by 5\n");
    else
        printf("Not divisible by 3 or 5\n");
}

int main()
{
    checkTriangle(3, 4, 3);
    printf("-----------------------------------\n");
    checkDivisibility(15);
    return 0;
}
