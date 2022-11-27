/**
 *
 * Question
 * --------
 * Write a program to swap two variables values with and without using third variables.
 * Write algorithm and draw flowchart for the same.
 *
 *
 *
 * Algorithm
 * ---------
 *
 * 1. START
 * 2. PRINT Enter two numbers
 * 3. INPUT a,b
 * 4. PRINT Numbers before swapping (a,b)
 * 5.       temp = a
 *          a = b
 *          b = temp
 * 6. PRINT Numbers after swapping (a,b)
 * 7. END
 */

#include <stdio.h>

int main(void)
{

    // init numbers
    int a, b;
    printf("Enter two numbers (seperate by comma): ");
    scanf("%d,%d", &a, &b);

    printf("Before Swapping");
    printf("\nA = %d \n", a);
    printf("B = %d \n\n", b);

    // swapping
    int temp = a;
    a = b;
    b = temp;

    // display swapped numbers
    printf("After Swapping");
    printf("\nA = %d \n", a);
    printf("B = %d \n", b);
}