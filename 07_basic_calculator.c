/**
 * 
 * Question
 * --------
 * Write a menu driven program to perform simple arithmetic operations 
 * based on the user's choice. 
 * The user will indicate the operation to be performed 
 * using the signs e.g. + for addition, etc. 
 * Write an algorithm and draw flowchart for same
 * 
 * 
 * 
 * Algorithm
 * ---------
 * 01. START
 * 02. PRINT Basic Calculator
 * 03. PRINT Enter first number
 * 04. INPUT a
 * 05. PRINT ENter second number
 * 06. INPUT b
 * 07. PRINT "
 *          Select Operator
 *      [+] Addition
 *      [-] Substraction
 *      [*] Multiplication
 *      [/] Division
 * 
 *      Enter your symbol:"
 * 08. INPUT choice
 * 09. IF choice == '+' THEN PRINT Result is a + b
 * 10. ELSE IF choice == '-' THEN PRINT Result is a - b
 * 11. ELSE IF choice == '*' THEN PRINT Result is a * b
 * 12. ELSE IF choice == '/' THEN PRINT Result is a / b
 * 13. ELSE PRINT Invalid Operator
 * 14. END
*/

#include <stdio.h>


int main(void){
    // Main Menu
    char choice;
    float a,b,result=0;

    printf("\n\n            Basic Calculator\n\n");

    // Get Values
    printf("\n      Enter first number: ");
    scanf("%f",&a);

    printf("\n      Enter second number: ");
    scanf("%f",&b);


    // Operator Selection
    printf("\n\n     Select Operator\n");

    printf("    [+] Addition\n");
    printf("    [-] Substraction\n");
    printf("    [*] Multiplication\n");
    printf("    [/] Division\n");

    printf("\n      Enter your symbol: ");
    
    scanf(" %c",&choice);


   

    switch (choice)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("This Operation is not supported yet.\n");
        return 0;
    }

    printf("\n      Result is: %.3f\n\n\n",result);

}