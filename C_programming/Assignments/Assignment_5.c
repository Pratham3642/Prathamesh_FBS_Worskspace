#include <stdio.h>

// print a solid square pattern
void main()
{
    int n = 4;
    for (int i = 0; i < n; i++) // rows
    {
        for (int j = 0; j < n; j++) // columns
        {
            printf("* ");
        }
        printf("\n");
    }
}

// print a right angled triangle pattern
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++) // rows
    {
        for (int j = 0; j <= i; j++) // columns
        {
            printf("* ");
        }
        printf("\n");
    }
}

// print an inverted right angled triangle pattern
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// print a pyramid pattern
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < n; j++)
        {
            /*why ? j<n-i-1 = since we want print pyramid shape the first star
            should be at 4 since we go from j=0to j<n so when we use j < n-i the
            first row will have 5 spaces and we want to print star at 4 so
            we use j < n-i-1
            */
            if (j < n - i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}

// print an inverted pyramid pattern
void main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}

// print a half pyramid using numbers
void main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    /* why i =1 when j=1 because it prints one blank line since when j<=1
    for first it becomes 1<=0 which is false and goes to next line
    printing exactly 5 rows but with wrong input so to solve it
    we declare i = 1 too.*/
    {
        for (int j = 1; j <= i; j++) // columns
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// print a floyds triangle pattern
void main()
{
    int n = 4, num = 1;
    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= i; j++) // columns
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

// print a half diamond pattern
void main()
{
    int n = 4;
    for (int i = 0; i < n; i++) // rows
    {
        for (int j = 0; j <= i; j++) // columns
        {
            printf("* ");
        }
        printf("\n");
    }
    // inverted = here we do n-1 so that we do not repeat the middle row
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// print a hollow solid square pattern
void main()
{
    int n = 4;
    for (int i = 0; i < n; i++) // rows
    {
        for (int j = 0; j < n; j++) // columns
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  "); // add 2 spaces since it causes misallignment
                              // since we used 2 charaters in if part
        }
        printf("\n");
    }
}

// print a hollow square with diagonal pattern
void main()
{
    int n = 4;
    for (int i = 0; i < n; i++) // rows
    {
        for (int j = 0; j < n; j++) // columns
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}