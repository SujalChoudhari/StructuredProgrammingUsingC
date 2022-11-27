/**
 * Question
 * --------
 * 
 * Design and develop a flowchart or an algorithm 
 * that takes three coefficients (a, b, and c) of a
 * Quadratic equation (ax2 +bx+c=0) as input and compute all possible roots. 
 * 
 * Implement a C programn for the developed 
 * flowchart/algorithm and execute the same to output the possible roots for a give
 * set of coefficients with appropriate messages
 * 
 * 
 * 
 * 
 * Algorithm
 * ---------
 * 01. START
 * 02. PRINT Enter a,b,c for the Quadratic Equation (ax2 + bx +c = 0 )
 * 03. INPUT a,b,c
 * 04. IF a == 0
 *      THEN PRINT 'a' cannot be zero
 *           GOTO Step: 09
 * 05. delta = (b * b) - 4 * a * c
 * 06. IF delta < 0
 *      THEN PRINT Equation has Complex Roots
 * 07. ELSE IF delta = 0
 *      THEN PRINT Equation has One Real root
 *           root = (-b) / (2 * a)
 *          PRINT "The solution is", root
 * 08. ELSE (i.e. delta > 0)
 *      PRINT Equation has Two real roots
 *      root1 = ( (-b) + sqrt(delta) )/(2 * a)
 *      root2 = ( (-b) - sqrt(delta) )/(2 * a)
 *      PRINT "The solution is {" , root1, root2 ,"}"
 * 09. END
*/

#include <stdio.h>
#include <math.h>

int main(void){
    
    float a,b,c;
    float delta;
    

    printf("Enter a,b,c for the Quadratic Equation (ax2 + bx + c = 0) (seperate by comma): ");
    scanf("%f,%f,%f",&a,&b,&c);

    if(a == 0.0f) {
        printf("Value of 'a' cannot be 0\n");
        return 0;
    }

    // Calculate delta (discriminant)
    delta = (b * b) - 4 * a * c; 

    if(delta < 0.0f){
        printf("Equation %.2fx2 + %.2fx + %.2f has Imaginary Roots.\n",a,b,c);
    }
    else if(delta == 0.0f){
        printf("Equation %.3fx2 + %.3fx + %.3f has One Real Root.\n",a,b,c);
        float root = (-b) / (2 * a);
        printf("The solution is: x = %.3f \n",root);
    }
    else {
        printf("Equation %.3fx2 + %.3fx + %.3f has Two Real Roots.\n",a,b,c);
        float root1 = ( (-b) + sqrt(delta) )/(2 * a);
        float root2 = ( (-b) - sqrt(delta) )/(2 * a);

        printf("The solution is: x={ %.3f , %.3f }\n",root1,root2);
    }

    

}