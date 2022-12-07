
# Question
Write a program to check odd or even number:
- using modulus operator
- using conditional operator


# Algorithm
- START
- PRINT Enter a number
- INPUT number
- IF reminder of (number/2) is 0
    - THEN
    - PRINT Number is an even number
-  ELSE
    - PRINT Number is an odd number
- END

```c
#include <stdio.h>

void main()
{

    int number;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Number %d is an even number\n", number);
    }
    else
    {
        printf("Number %d is an odd number\n", number);
    }
    getch();
}

```
