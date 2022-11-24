//Write a program to check odd or even number:
//(a) using modulus operator 
//(b) using conditional operator

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