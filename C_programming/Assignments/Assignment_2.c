#include <stdio.h>

// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
void main()
{
    int a, b, result;
    char op;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+')
    {
        result = a + b;
        printf("Result: %d\n", result);
    }
    else if (op == '-')
    {
        result = a - b;
        printf("Result: %d\n", result);
    }
    else if (op == '*')
    {
        result = a * b;
        printf("Result: %d\n", result);
    }
    else if (op == '/')
    {
        if (b != 0)
        {
            result = a / b;
            printf("Result: %d\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid operator.\n");
    }
}

// Determine whether the triangle is equilateral, isosceles, or scalene.
void main()
{
    int a, b, c;
    printf("Enter the values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("The triangle is equilateral");
    }
    else if (a == b || b == c || c == a)
    {
        printf("The triangle Isosceles");
    }
    else
    {
        printf("The triangle is Scalene ");
    }
}

// Find the largest of three numbers
void main()
{
    int a = 9, b = 8, c = 4;
    if (a > b)
    {
        printf("a is greater");
        if (a > c)
        {
            printf("a is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
}

// Find grade of a student based on marks obtained
void main()
{

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 75)
    {
        printf("Distinction");
    }
    else if (marks >= 65)
    {
        printf("First Class");
    }
    else if (marks >= 55)
    {
        printf("Second Class");
    }
    else if (marks >= 40)
    {
        printf("Pass Class");
    }
    else
    {
        printf("Fail");
    }
}

// Calculate final price after discount based on user type and price
void main()
{
    float price, discount, final_price;
    char user;
    printf("Enter the price: ");
    scanf("%f", &price);
    printf("Are you a student(y or n): ");
    scanf(" %c", &user);
    if (user == 'y')
    {
        if (price >= 500)
        {
            printf("Discount 20%%\n");
            discount = price * 0.20;
            final_price = price - discount;
            printf("final price: %.2f", final_price);
        }
        else
        {
            printf("Discount 10%%\n");
            discount = price * 0.10;
            final_price = price - discount;
            printf("final price: %.2f", final_price);
        }
    }
    else
    {
        if (price >= 600)
        {
            printf("Discount 15%%\n");
            discount = price * 0.15;
            final_price = price - discount;
            printf("final price: %.2f", final_price);
        }
        else
        {
            printf("No discount\n");
            final_price = price;
            printf("final price: %.2f", final_price);
        }
    }
}

// Check whether a number is divisible by 3 and 5 or both
void main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by both 3 and 5", num);
    }
    else if (num % 5 == 0)
    {
        printf("%d is divisible by 5", num);
    }
    else if (num % 3 == 0)
    {
        printf("%d is divisible by 3", num);
    }
    else
    {
        printf("%d is not divisible by both 3 and 5", num);
    }
}

// Categorize a person based on age
void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 12)
    {
        printf("Child");
    }
    else if (age >= 12 && age <= 19)
    {
        printf("Teenager");
    }
    else if (age >= 20 && age <= 59)
    {
        printf("Adult");
    }
    else
    {
        printf("Senior Citizen");
    }
}