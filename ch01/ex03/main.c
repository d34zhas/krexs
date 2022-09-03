/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.04.2022
 * ==============================================
 * Exercise 1-3:
 * Modify the temperature conversion program to print a heading above
 * the table.
 ********************************************************************/

#include <stdio.h>

int main()
{
    float f;
    float c;
    int min;
    int max;
    int step;

    min = 0;
    max = 300;
    step = 20;

    printf("%s\n", "-------------");
    printf("%s\n", "| F |   C   |");
    printf("%s\n", "-------------");

    f = min;
    while (f <= max)
    {
        c = (5.0 / 9.0) * (f - 32.0);
        printf("|%3.0f|%7.1f|\n", f, c);
        f = f + step;
    }

    printf("%s\n", "-------------");
}
