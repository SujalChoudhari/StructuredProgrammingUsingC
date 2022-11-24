//Write a C program to find the sum of individual digits of a 3-digit number.

#include <stdio.h>

int main(void){
    int number,sum=0;
    printf("Enter a 3 digit number: ");
    scanf("%d",&number);

    //(can be simplified using loop)
    // for last digit
    sum += number % 10; 
    number = number / 10;

    // for middle digit
    sum += number % 10;
    number = number / 10;

    // for first digit
    sum += number % 10;
    number = number / 10;

    printf("Sum of the digits is: %d\n",sum);

}