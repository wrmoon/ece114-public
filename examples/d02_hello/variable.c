#include <stdio.h>

// This program demonstrates what happens when a variable is uninitialized. 

// NOTE: Since we compile with -Wall and -Werror, this won't work with our ggg tool.
// You need to compile with this:
//  clang -g -std=gnu11 -o uninitialized ./uninitialized.c
int main(void)
{
    int uninitialized;

    printf("This variable could be anything: %d\n", uninitialized);
    return 0;
}