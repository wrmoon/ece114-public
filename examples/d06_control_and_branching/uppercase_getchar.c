#include <stdio.h>

int main(void)
{
    char ch;
    ch = getchar();

    if (ch == 'A')
    {
        ch = 'a';
    }
    putchar(ch);
    return 0;
}