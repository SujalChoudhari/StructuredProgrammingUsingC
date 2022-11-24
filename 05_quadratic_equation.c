/*
Design and develop a flowchart or an algorithm 
that takes three coefficients (a, b, and c) of a
Quadratic equation (ax2 +bx+c=0) as input and compute all possible roots. 

Implement a C programn for the developed 
flowchart/algorithm and execute the same to output the possible roots for a given
set of coefficients with appropriate messages
*/

#include <stdio.h>
#include <math.h>

int main(void){
    
    float a,b,c;
    float delta;
    

    printf("Enter a,b,c for the Quadratic Equation (ax2 +bx+c=0) (seperate by comma): ");
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
        printf("Equation %fx2 + %fx + %f has One Real Root.\n",a,b,c);
        float root = (-b) / (2 * a);
        printf("The solution is: x = %.3f \n",root);
    }
    else {
        printf("Equation %fx2 + %fx + %f has Two Real Roots.\n",a,b,c);
        float root1 = ( (-b) + sqrt(delta) )/(2 * a);
        float root2 = ( (-b) - sqrt(delta) )/(2 * a);

        printf("The solution is: x={ %.3f , %.3f }\n",root1,root2);
    }

    

}