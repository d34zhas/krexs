/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.09.2022
 * ==============================================
 * Exercise 1-9:
 * Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 ********************************************************************/

#include <stdio.h>

#define SPACE 32

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);

        if (c == SPACE)
        {
            while ((c = getchar()) == SPACE)
            {
                ;
            }
            
            if (c != EOF)
            {
                putchar(c);
            }
        }
    }
}
