/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.04.2022
 * ==============================================
 * Exercise 1-4:
 * Write a program to print the corresponding Celsius to Fahrenheit
 * table.
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
    printf("%s\n", "| C |   F   |");
    printf("%s\n", "-------------");

    c = min;
    while (c <= max)
    {
        f = c / (5.0 / 9.0) + 32.0;
        printf("|%3.0f|%7.1f|\n", c, f);
        c = c + step;
    }

    printf("%s\n", "-------------");
}
