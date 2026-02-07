#include <stdio.h>
int main()
{
    int exit = 0;
    for (int y = 0; y < 25; y++)
    {
        for (int x = 0; x < 25; x++)
        {
            putchar('.');

            if (x == 10 && y == 10)
            {
                exit = 1;
                break; // break out of inner for loop only
            }
        }
        if (exit)
        {
            break; // break out of outer for loop
        }
        putchar('\n');
    }
    printf("X\n");
    return 0;
}
