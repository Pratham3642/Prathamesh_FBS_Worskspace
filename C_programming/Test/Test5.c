#include <stdio.h>

// void sellingPrice(float cp)
// {
//     float sp, discount;
//     if (cp > 0)
//     {
//         if (cp <= 500)
//         {
//             discount = cp * 5 / 100;
//         }
//         else
//         {
//             if (cp <= 1000)
//             {
//                 discount = cp * 10 / 100;
//             }
//             else
//             {
//                 discount = cp * 15 / 100;
//             }
//         }
//         sp = cp - discount;
//         printf("Selling price = %.2f\n", sp);
//     }
//     else
//     {
//         printf("Invalid cost price!!!");
//     }
// }

// void main()
// {
//     float cp;
//     printf("Enter the Cost Price: ");
//     scanf("%f", &cp);
//     sellingPrice(cp);
// }

void deposit(int balance)
{
    int amt;
    printf("Enter the amount to Deposit: ");
    scanf("%d", &amt);
    balance = balance + amt;
    printf("Balance = %d", balance);
}

void withdraw(int balance)
{
    int amt;
    if (balance < 3000)
    {
        printf("Can't withdraw, balance not sufficient\n");
    }
    else
    {
        printf("Enter amount to withdraw: ");
        scanf("%d", &amt);
        balance = balance - amt;
        printf("Balance = %d", balance);
    }
}

void main()
{
    int balance = 10000;
    int choice;
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    scanf("%d", &choice);
    (choice == 1) ? deposit(balance) : withdraw(balance);
}