/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.01.2022
 * ==============================================
 * Exercise 1-1:
 * Run the "hello, world" program on your system.
 * Experiment with leaving out parts of the program, to see what
 * error messages you get.
 ********************************************************************/

#include <stdio.h>

int main()
{
    printf("Hello, World\n");
}

/*
 * Experiment 1: Remove preprocessor directive include
 *
 * int main()
 * {
 *     printf("Hello, World\n");
 * }
 * 
 * Output: warning: implicit declaration of function "printf"
 * ------------------------------------------------------------------
 * 
 * Experimnt 2: Remove the opening parenthesis
 * 
 * #include <stdio.h>
 *
 * int main)
 * {
 *     printf("Hello, World\n");
 * }
 * 
 * Output: error: expected "=", ",", ";", "asm" or "__attribute__"
 * before ")" token
 * ------------------------------------------------------------------
 * 
 * Experimnt 3: Remove the closing parenthesis
 * 
 * #include <stdio.h>
 *
 * int main(
 * {
 *     printf("Hello, World\n");
 * }
 * 
 * Output: error: expected declaration specifiers or "..."
 * before "{" token
 * ------------------------------------------------------------------
 * 
 * Experiment 4: Remove the opening curly brace
 * 
 * #include <stdio.h>
 *
 * int main()
 * 
 *     printf("Hello, World\n");
 * }
 * 
 * Output:
 * 1. error: expected declaration specifiers before "printf"
 * 2. error: expected declaration specifiers before "}" token
 * ------------------------------------------------------------------
 * 
 * Experiment 5: Remove the closing curly brace
 * 
 * #include <stdio.h>
 *
 * int main(
 * {
 *     printf("Hello, World\n");
 * 
 * Output: error: expected declaration or statement at end of input
 * ------------------------------------------------------------------
 * 
 * Experiment 6: Remove the semicolon
 * 
 * #include <stdio.h>
 *
 * int main(
 * {
 *     printf("Hello, World\n")
 * }
 * 
 * Output: error: expected ";" before "}" token
 * ------------------------------------------------------------------
*/
