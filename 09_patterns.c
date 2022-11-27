/**
 * Queation
 * --------
 * Write programs to display each of the following patterns.
 * Write algorithm and draw flowchart for the same
 *
 * A)                  B)
 * 1                            A
 * 2 1                        A B A
 * 3 2 1                    A B C B A
 * 4 3 2 1                A B C D C B A
 * 5 4 3 2 1            A B C D E D C B A
 *
 * Algorithm (A)
 * -------------
 * 01. START
 * 02. i = 1
 * 03. IF (i > 5) THEN GOTO END
 * 04. j = i
 * 05. IF (j = 0) THEN GOTO Step:03
 * 06. PRINT j, " "
 * 07. j--
 * 08. GOTO Step:05
 * 09. PRINT "\n"
 * 10. i++
 * 11. GOTO Step:03
 * 12. END
 *
 *
 * Algorithm (B)
 * -------------
 * 01. START
 * 02. total = 5,c = 'A'
 * 03. i = 0
 * 04. IF i >= total THEN GOTO Step:23
 * 
 * 05. j = 0
 * 06. IF j >= total -i THEN GOTO Step:10
 * 07. PRINT " "
 * 08. j++
 * 09. GOTO Step:06
 * 
 * 10. k = 0
 * 11. IF k > i THEN GOTO Step:15
 * 12. PRINT c + k
 * 13. k++
 * 14. GOTO Step:11
 * 
 * 15. l = 0
 * 16. IF l >= i THEN GOTO Step:20
 * 17. PRINT  c + i - 1 - l
 * 18. l++
 * 19. GOTO Step:16
 * 
 * 20. PRINT "\n"
 * 21. i++
 * 22. GOTO Step:04
 * 23. END
 */

#include <stdio.h>

#define A 1
#define B 0

int main(void)
{
#if B
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
#else
    int total = 5;
    char c = 'A';
    for (int i = 0; i < total; i++)
    {
        // Spaces
        for (int j = 0; j < total - i; j++)
        {
            printf(" ");
        }
        // Left half
        for (int k = 0; k <= i; k++)
        {
            printf("%c", c + k);
        }
        // Right Half
        for (int l = 0; l < i; l++)
        {
            printf("%c", c + i - 1 - l);
        }
        printf("\n");
    }

#endif
}