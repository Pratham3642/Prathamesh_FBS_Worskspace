#include <stdio.h>

// convert time entered in hr,min,sec into total seconds
void main()
{
    int h, m, s, total;
    printf("Enter hours: ");
    scanf("%d", &h);

    printf("Enter minutes: ");
    scanf("%d", &m);

    printf("Enter seconds: ");
    scanf("%d", &s);

    total = (h * 3600) + (m * 60) + s;

    printf("Total Seconds: %d", total);
}

// Check if the year is leap or not
void main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 || year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

// Print last 2 digit of number
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Last two digits : %d", num % 100);
}