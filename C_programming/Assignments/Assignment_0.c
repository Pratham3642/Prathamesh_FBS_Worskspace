#include <stdio.h>

//Write a C program to add two integers and display the result
void main(){
    int num1=20, num2=30, sum;
    sum = num1+num2;
    printf("Sum = %d", sum);
}


// Write a C program to find the area of a circle.
void main(){
    float radius = 5, area;
    area = 3.14 *radius * radius; 
    printf("Area of Circle = %.2f", area);
}


// Write a C program to convert temperature from Celsius to Fahrenheit
void main(){
    float c=37,f;
    f = (c *9/5) + 32;
    printf("Temperature in Fahrenheit = %.2f",f);
}

//Write a C program to swap two numbers using a temporary third variable.
void main(){
    int a =10, b=20, temp;
    temp = a;
    a=b;
    b=temp;
    printf("After Swapping: a = %d, b = %d", a, b);
}


//Write a C program to input five numbers and find their average.
void main(){
    int num1=10, num2=20, num3=34, num4=40, num5=50;
    float average = (num1 + num2 + num3 + num4 + num5) / 5.0;
    printf("Average = %.2f", average);
}


// Write a C program to find the square and cube of a given number.
void main(){
    int num =20;
    int square = num * num;
    int cube  = square * num;
    printf("Square = %d\n", square);
    printf("Cube = %d\n", cube);
}

//Write a C program to convert given minutes into hours and remaining minutes.
void main(){
    int min = 140;
    int hr = min/60;
    int remining_min = min % 60;
    printf("%d minutes = %d hours and %d minutes", min, hr, remining_min);
}


//Write a C program to input the length and width of a rectangle and find its perimeter.
void main(){
    float length = 10.5, width = 5.5;
    float perimeter = 2 * (length + width);
    printf("Perimeter of Rectangle = %.2f", perimeter);
}

//Write a C program to input the base and height of a triangle and calculate its area.
void main(){
    float base = 10.0, height = 5.0;
    float area = 0.5 * base * height;
    printf("Area of Triangle = %.2f", area);
}


//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.
void main(){
    int marks1=85, marks2=90, marks3=78, marks4=88, marks5=92;
    int total_marks = marks1 + marks2 + marks3 + marks4 + marks5;
    float percentage = (total_marks / 500.0) * 100;
    printf("Total Marks = %d\n", total_marks);
    printf("Percentage = %.2f%%", percentage);
}
