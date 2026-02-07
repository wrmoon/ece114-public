#include <stdio.h>
int main()
{
    int exit = 0;
    for (int y = 0; y < 8; y++)
    {
        for (int x = y; x < 8; x++)
        {
            printf("%d %d\n", x, y);

            if (x == 4 && y == 4)
            {
                exit = 1;
                break;
            }
        }
        if (exit)
        {
            break;
        }
        printf("======\n");
    }
    printf("done\n");
    return 0;
}