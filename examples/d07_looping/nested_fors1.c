#include <stdio.h>
#define ROWS 10
#define COLS 12

int main(void)
{
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            putchar('A' + c);
        }
        putchar('\n');
    }
    return 0;
}
