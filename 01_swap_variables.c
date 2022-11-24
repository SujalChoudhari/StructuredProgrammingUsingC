// Write a program to swap two variables values with and without using third variables. 
// Write algorithm and draw flowchart for the same.

#include <stdio.h>

int main(){

    // init numbers
    int a,b;
    printf("Enter two numbers (seperate by comma): ");
    scanf("%d,%d",&a,&b);

    printf("Before Swapping");
    printf("\nA = %d \n",a);
    printf("B = %d \n\n",b);

    // swapping
    a = a + b;  
    b = a - b;  
    a = a - b;  

    // display swapped numbers
    printf("After Swapping");
    printf("\nA = %d \n",a);
    printf("B = %d \n",b);
    
}