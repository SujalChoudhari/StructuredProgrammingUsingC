/**
 * Question
 * --------
 * Write a program to read a number of more than one digit,
 * reverse the number and display the sum of digits of numbers.
 * Write algorithm and draw flowchart for the same.
 *
 * Algorithm
 * ---------
 * 01. START
 * 02. PRINT Enter a number to reverse
 * 03. INPUT number
 * 04. reversed = 0
 * 05. IF number ==0 THEN GOTO Step:10
 * 06. last = number % 10
 * 07. reversed * reversed * 10 + last
 * 08. number /= 10
 * 09. GOTO Step:05
 * 10. PRINT "The reversed number is" , reversed
 * 11. END
 */

#include <stdio.h>

int main(void)
{
    int number, reversed = 0;
    printf("\nEnter a number to reverse: ");
    scanf("%d", &number);

    while (number != 0)
    {
        int last_digit = number % 10;
        reversed = reversed * 10 + last_digit;
        number /= 10;
    }

    printf("\nRversed number is: %d\n", reversed);
}