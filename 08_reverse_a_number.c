/*
Write a program to read a number of more than one digit,
reverse the number and display the sum of digits of numbers. 
Write algorithm and draw flowchart for the same.
*/

#include <stdio.h>


int main(void){
    int number, reversed = 0;
    printf("\nEnter a number to reverse: ");
    scanf("%d",&number);

    while(number != 0){
        int last_digit = number % 10;
        reversed = reversed * 10 + last_digit;
        number /= 10;
    }

    printf("\nRversed number is: %d\n",reversed);

}