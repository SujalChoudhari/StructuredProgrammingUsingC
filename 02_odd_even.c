/**
 * Question
 * --------
 * Write a program to check odd or even number:
 * (a) using modulus operator 
 * (b) using conditional operator
 * 
 * 
 * 
 * Algorithm
 * ---------
 * 
 * 1. START
 * 2. PRINT Enter a number
 * 3. INPUT number
 * 4. IF reminder of (number/2) is 0
 *      THEN
 *      PRINT Number is an even number
 * 5. ELSE
 *      PRINT Number is an odd number
 * 6. END
*/


#include <stdio.h>

int main(void){

    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number % 2 == 0) {
        printf("Number %d is an even number\n",number);
    }
    else {
        printf("Number %d is an odd number\n", number);

    }

}