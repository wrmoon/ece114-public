/* while_cube.c -- using a while loop to make a table of cubes */
#include <stdio.h>
#define MAX_SIZE 6
int main(void)
{
    int num = 0;
    printf("    n   n cubed\n");
    while(++num <= MAX_SIZE)
    {
        printf("%5d %5d\n", num, num*num*num);
    }
    return 0;
}

// based on Prata, Stephen. C Primer Plus (Developer's Library) (p. 209). Pearson Education. Kindle Edition. 