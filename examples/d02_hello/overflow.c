#include <stdio.h>

// This program demonstrates what happens when a number overflows
int main(void)
{
    unsigned char a = 255;
    a = a + 1;

    printf("a is %d\n", a);
    return 0;
}