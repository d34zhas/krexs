/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.03.2022
 * ==============================================
 * Exercise 1-2:
 * Experiment to find out what happens when prints's argument string
 * contains "\c", where c is some character not listed above.
 * ----------------------------------------------
 * The complete set of escape sequences:
 * "\a" -- alert (bell) character
 * "\b" -- backspace
 * "\f" -- formfeed
 * "\n" -- newline
 * "\r" -- carriage return
 * "\t" -- horizontal tab
 * "\v" -- vertical tab
 * "\\" -- backslash
 * "\?" -- question mark
 * "\'" -- single quote
 * "\"" -- double quote
 * "\000" -- octal number
 * "\xhh" -- hexadecimal number
 ********************************************************************/

#include <stdio.h>

int main()
{
    printf("\g\n");

    return 0;
}

/*
 * Output:
 * 1. warning: unknown escape sequence: "\g"
 * 2. => g
 */