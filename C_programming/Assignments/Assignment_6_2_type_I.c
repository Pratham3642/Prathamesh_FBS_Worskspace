#include <stdio.h>

//----------------- No argument, no return value ------------------------

void checkGrade()
{
    int marks = 72;

    if (marks >= 75)
        printf("Distinction\n");
    else if (marks >= 65)
        printf("First Class\n");
    else if (marks >= 55)
        printf("Second Class\n");
    else if (marks >= 40)
        printf("Pass Class\n");
    else
        printf("Fail\n");
}

void ageCategory()
{
    int age = 25;

    if (age < 12)
        printf("Child\n");
    else if (age <= 19)
        printf("Teenager\n");
    else if (age <= 59)
        printf("Adult\n");
    else
        printf("Senior Citizen\n");
}

int main()
{
    checkGrade();
    printf("--------------------------------\n");
    ageCategory();
    return 0;
}