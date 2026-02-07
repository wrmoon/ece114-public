// let's see if we can declare and use a 2D VLA
#include <stdio.h>

int main()
{
    const int rows = 12;
    const int cols = 24;

    int vla[rows][cols];

    for (int r=0; r < rows; r++)
    {
        for (int c=0; c < cols; c++)
        {
            vla[r][c] = (r+1)*(c+1);
        }
    }

    printf("   ");
    for (int c=0; c < cols; c++)
    {
        printf("%4d", c+1);
    }
    printf("\n");
    for (int r=0; r < rows; r++)
    {
        printf("%3d", r+1);
        for (int c=0; c < cols; c++)
        {
            printf("%4d", vla[r][c]);
        }
        printf("\n");
    }
    return 0;
}
