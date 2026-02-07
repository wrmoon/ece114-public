#include <stdio.h>
#define ROWS 8
#define COLS 8

int main(void)
{
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = r; c < COLS; c++)
        {
            putchar('A' + c);
        }
        putchar('\n');
    }
    return 0;
}
