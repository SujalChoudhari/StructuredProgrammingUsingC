
// Write a program to count the number of digits in a given integer.

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