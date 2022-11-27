/**
 * 
 * Question
 * --------
 * Write a C program to find maximum and minimum between two numbers using functions. 
 * Write algorithm and draw flowchart for the same.
 * 
 * Algorithm
 * ---------
 * ?
*/



#include <stdio.h>

int max(int num1,int num2);
int min(int num1,int num2);

int main(void){
    int a = 300, b = 4049;
    printf("\nMin: %d, Max: %d\n",min(a,b),max(a,b));
}

int max(int num1,int num2){
    return (num1 > num2 ? num1 : num2 );
}

int min(int num1,int num2){
    return (num1 > num2 ? num2 : num1 );
}
