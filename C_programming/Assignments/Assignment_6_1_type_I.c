#include <stdio.h>

/*------------------- 1. No argument, no return --------------*/

// find whether a number is even or odd
void evenOdd()
{
    int num = 9;
    if (num % 2 == 0)
    {
        printf("%d is an even number", num);
    }
    else
    {
        printf("%d is an odd number", num);
    }
}

void eligibleForVote(); // declaration
void main()
{
    evenOdd();
    printf("\n");
    printf("*****************************************\n");
    eligibleForVote();
}
// check whether a person is eligible to vote
void eligibleForVote()
{
    int age = 12;
    printf("Age = %d\n", age);
    if (age >= 18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }
}