/**
 * Question
 * --------
 * Write a C program to find the sum of individual digits of a 3-digit number.
 *
 *
 *
 * Algorithm
 * ---------
 * 01. START
 * 02. PRINT Enter a 3 digit number
 * 03. INPUT number
 * 04. i = 1, sum = 0
 * 05. IF (i > 3)
 *      THEN GOTO Step: 10
 * 06. sum = sum + number % 10
 * 07. number = number / 10
 * 08. i = 1 + 1
 * 09. GOTO Step: 5
 * 10. END
 *
 */

#include <stdio.h>

int main(void)
{
    int number, sum = 0;
    printf("Enter a 3 digit number: ");
    scanf("%d", &number);

    for (int i = 0; i < 3; i++)
    {
        sum += number % 10;
        number = number / 10;
    }

    printf("Sum of the digits is: %d\n", sum);
}