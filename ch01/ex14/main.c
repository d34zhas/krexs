/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.20.2022
 * ==============================================
 * Exercise 1-14:
 * Write a program to print a histogram of the frequencies of
 * different characters in its input.
 ********************************************************************/

#include <stdio.h>
#define LF 10
#define SPACE 32
#define STAR 42
#define MINUS 45
#define TILDE 126
#define PRINTCHARS 95

/*
 * Codes from 32 to 126, known as the printable characters, represent letters,
 * digits, punctuation marks, and a few miscellaneous symbols. There are 95
 * printable characters in total.
 */

int main()
{
    int c;
    int i, j;
    int max;
    int characters[PRINTCHARS];
    
    /* Initialize an array of characters. */
    for (i = 0; i < PRINTCHARS; ++i)
    {
        characters[i] = 0;
    }

    /* Read input. */
    while ((c = getchar()) != EOF)
    {
        if (c >= SPACE && c <= TILDE)
        {
            ++characters[c - SPACE];
        }
    }
    
    /* Find the maximum frequency value. */
    max = 0;
    for (i = 0; i < PRINTCHARS; ++i)
    {
        if (characters[i] > max)
        {
            max = characters[i];
        }
    }

    /* Print a histogram. */
    for (i = max; i > 0; --i)
    {
        for (j = 0; j < PRINTCHARS; ++j)
        {
            if (characters[j] >= i)
            {
                putchar(STAR);
            }
            else
            {
                putchar(SPACE);
            }
        }

        putchar(LF);
    }

    /* Print a separator line. */
    for (i = 0; i < PRINTCHARS; ++i)
    {
        putchar(MINUS);
    }

    putchar(LF);

    /* Print characters. */
    for (i = 0; i < PRINTCHARS; ++i)
    {
        putchar(i + SPACE);
    }

    putchar(LF);
}
