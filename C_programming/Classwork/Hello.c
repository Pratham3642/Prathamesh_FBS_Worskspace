#include <stdio.h>

//write a program to check whether a number is even or odd
void main(){
    int x=3;
    if(x%2==0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
}

//Check whether person is eligible to vote or not
void main(){
    int age = 19;
    if(age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not Eligible to vote");
    }
}

//Check whether a number is positive or negative
void main(){
    int num = -4;
    if(num>=0){
        printf("Positive Number");
    }
    else{
        printf("Negative Number");
    }
}

//Check whether a year is leap year or not
void main(){
    int year =2020;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}