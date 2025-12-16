#include <stdio.h>

/*------------------------- No argument, Return value ------------------------*/

int greatest()
{
    int a = 9, b = 8, c = 4;

    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main()
{
    int g = greatest();
    printf("Greatest = %d\n", g);
    return 0;
}
