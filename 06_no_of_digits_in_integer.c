/**
 * Question
 * --------
 * Write a program to count the number of digits in a given integer.
 * 
 * 
 * Algorithm
 * ---------
 * 01. START
 * 02. PRINT Enter a integer
 * 03. INPUT number
 * 04. count = 0
 * 05. number = number / 10
 * 06. count ++
 * 07. IF number != 0 THEN GOTO Step:05
 * 08. PRINT "There are" , count , "digits in the given number"
 * 09. END
*/

#include <stdio.h>

int main(void){
    int number,count=0;

    printf("Enter an integer: ");
    scanf("%d",&number);

    //using same logic of practical 04, with a do while loop
    
    do{
        number /= 10;
        count ++;
    }while(number != 0);

    printf("\n There are %d digits in the given integer\n",count);

}