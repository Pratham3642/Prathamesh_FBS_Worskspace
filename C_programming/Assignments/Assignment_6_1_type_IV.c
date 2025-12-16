#include <stdio.h>
/* -------------------------- Argument, Return value --------------------*/

// calculate the total salary of an employee based on basic salary
int calculateSalary(int basic)
{
    int da, ta, hra;
    if (basic <= 5000)
    {
        da = basic * 0.1;
        ta = basic * 0.2;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.1;
        ta = basic * 0.2;
        hra = basic * 0.25;
    }
    int total_salary = basic + da + ta + hra;
    return total_salary;
}

void main()
{
    int basic = 4000;
    int totalSalary;

    totalSalary = calculateSalary(basic);

    printf("Total Salary = %d", totalSalary);
}