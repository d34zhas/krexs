/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.05.2022
 * ==============================================
 * Exercise 1-5:
 * Modify the temperature conversion program to print the table in
 * reverse order, that is, from 300 degrees to 0.
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

    for (f = max; f >= min; f -= step)
    {
        c = (5.0 / 9.0) * (f - 32.0);
        printf("|%3.0f|%7.1f|\n", f, c);
    }

    printf("%s\n", "-------------");
}