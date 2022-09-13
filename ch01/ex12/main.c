/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.13.2022
 * ==============================================
 * Exercise 1-12:
 * Write a program that prints its input one word per line.
 ********************************************************************/

#include <stdio.h>

#define TRUE    1
#define FALSE   0
#define SPACE   32
#define HT      9
#define LF      10 

int main()
{
    int c;
    int is_space;

    is_space = TRUE;
    while ((c = getchar()) != EOF)
    {
        if (c == SPACE || c == LF || c == HT)
        {
            if (is_space == FALSE)
            {
                is_space = TRUE;
                putchar(LF);
            }
        }
        else
        {
            is_space = FALSE;
            putchar(c);
        }
    }
}
