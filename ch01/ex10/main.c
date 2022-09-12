/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.12.2022
 * ==============================================
 * Exercise 1-10:
 * Write a program to copy its input to its output, replacing each
 * tab by "\t", each backspace by "\b", and each backslash by "\\". This
 * makes tabs and backspaces visible in an unambiguous way.
 ********************************************************************/

#include <stdio.h>

#define HORIZONTALTAB 9
#define BACKSPACE 8
#define BACKSLASH 92
#define TRUE 1
#define FALSE 0

int main()
{
    int c;
    int is_escape_sequence;

    while ((c = getchar()) != EOF)
    {
        is_escape_sequence = FALSE;

        if (c == HORIZONTALTAB)
        {
            is_escape_sequence = TRUE;
            putchar('\\');
            putchar('t');
        }

        if (c == BACKSPACE)
        {
            is_escape_sequence = TRUE;
            putchar('\\');
            putchar('b');
        }

        if (c == BACKSLASH)
        {
            is_escape_sequence = TRUE;
            putchar('\\');
            putchar('\\');
        }

        if (is_escape_sequence == FALSE)
        {
            putchar(c);
        }
    }
}
