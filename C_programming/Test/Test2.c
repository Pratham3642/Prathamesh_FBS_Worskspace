#include <stdio.h>

// // calculate electricity bill
// void main()
// {
//     float bill, units;
//     printf("Enter units consumed: ");
//     scanf("%f", &units);

//     if (units <= 50)
//     {
//         bill = units * 30;
//     }
//     else if (units <= 150)
//     {
//         bill = units * 40;
//     }
//     else
//     {
//         bill = units * 50;
//     }

//     printf("Total bill : %.2f", bill);
// }

// Check if number is positive, negative or neutral
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Number is positive");
    }
    else if (num < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is neutral");
    }
}