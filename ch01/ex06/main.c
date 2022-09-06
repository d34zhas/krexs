/********************************************************************
 * @Author:  Stanislav Kazakov <d34zhas@gmail.com>
 * @Date:    09.06.2022
 * ==============================================
 * Exercise 1-6:
 * Verify that the expression getchar() != EOF is 0 or 1.
 ********************************************************************/

#include <stdio.h>

int main()
{
    printf("Press ENTER: ");
    printf("=> getchar() != EOF: %d\n", getchar() != EOF);
    printf("Press CTRL+D: ");
    printf("\n=> getchar() != EOF: %d\n", getchar() != EOF);
}
