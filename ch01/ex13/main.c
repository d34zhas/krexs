/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.15.2022
 * ==============================================
 * Exercise 1-13:
 * Write a program to print a histogram of the lengths of words in
 * its input. It is easy to draw the histogram with the bars
 * horizontal; a vertical orientation is more challenging.
 ********************************************************************/

#include <stdio.h>

#define MAXLENGTH 25
#define IN 1
#define OUT 0
#define SPACE 32
#define HT 9
#define LF 10
#define STAR 42

int main()
{
    int c;
    int i;
    int j;
    int max;
    int length;
    int state;
    int bar[MAXLENGTH];

    for (i = 0; i < MAXLENGTH; ++i)
    {
        bar[i] = 0;
    }

    state = OUT;
    length = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == HT || c == LF || c == SPACE)
        {
            if (state == IN)
            {
                state = OUT;
                ++bar[length];
                length = 0;
            }
        }
        else
        {
            if (state == OUT)
            {
                state = IN;
            }

            ++length;
        }
    }
    
    max = 0;
    for (i = 0; i < MAXLENGTH; ++i)
    {
        if (bar[i] > max)
        {
            max = bar[i];
        }
    }
    
    for (i = max; i > 0; --i)
    {
        for (j = 0; j < MAXLENGTH; ++j)
        {
            if (bar[j] >= i)
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
}
