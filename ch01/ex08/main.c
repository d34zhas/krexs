/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.08.2022
 * ==============================================
 * Exercise 1-8:
 * Write a program to count blanks, tabs, and newlines.
 ********************************************************************/

#include <stdio.h>

int main()
{
    int c, wc, tc, nc;

    wc = tc = nc = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++wc;
        
        if (c == '\t')
            ++tc;
        
        if (c == '\n')
            ++nc;
    }

    printf("Blanks: %d\n", wc);
    printf("Tabs: %d\n", tc);
    printf("Newlines: %d\n", nc);
}
