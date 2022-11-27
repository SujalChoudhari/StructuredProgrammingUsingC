/**
 * 
 * Question
 * --------
 * Design and develop a C program to read a year as an 
 * input and find whether it is leap year or not.
 * Also consider the end of the centuries. 
 * Write algorithm and draw flowchart for the same.
 * 
 * 
 * Algorithm
 * ---------
 * 1. START
 * 2. PRINT Enter a year
 * 3. INPUT year
 * 4. IF (year is divisible by 400)
 *       THEN PRINT Year is a leap year
 * 5. ELSE IF (year is divisible by 100 (and not 400))
 *       THEN PRINT Year is not a leap Year
 * 6. ELSE IF (year is not divisible by 100 but is by 4)
 *       THEN PRINT Year is a leap year
 * 7. ELSE
 *       Then PRINT Year is not a leap year
 * 8. END
 * 
*/

#include <stdio.h>
int main(void) {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year", year);
   }
   else {
      printf("%d is not a leap year", year);
   }
}