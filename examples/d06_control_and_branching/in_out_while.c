#include <stdio.h>

int main(void)
{
    char ch = 0;

    while (ch != '!')
    {
        ch = getchar();
        putchar(ch);
    }

    printf("\n");
    return 0;
}