#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *ptr = NULL;
    do
    {
        // allocate 10000 integers every time
        ptr = (int*)malloc(sizeof(int) * 10000);
        putchar('.');
    }
    while(ptr != NULL);
}


