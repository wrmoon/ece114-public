#include <stdio.h>

// This program demonstrates what happens when a number overflows
int main(void)
{
    // Here a holds the maximum value that fits into a char (which is one byte)
    unsigned char a = 255;

    // Add one 
    a = a + 1;

    printf("a is %d\n", a);
    return 0;
}