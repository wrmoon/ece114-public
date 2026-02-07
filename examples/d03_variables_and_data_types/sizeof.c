#include <stdio.h>

int main(void)
{
    // The sizeof operator can work on types...
    printf("The size of char is      %zu bytes\n", sizeof(char));
    printf("The size of short is     %zu bytes\n", sizeof(short));
    printf("The size of int is       %zu bytes\n", sizeof(int));
    printf("The size of long is      %zu bytes\n", sizeof(long));
    printf("The size of long long is %zu bytes\n", sizeof(long long));

    // skip a line
    printf("\n");

    // And it can work on variables...
    int i = -18;
    unsigned short u_s = 2000;
    printf("The variable i uses   %zu bytes\n", sizeof(i));
    printf("The variable u_s uses %zu bytes\n", sizeof(u_s));

    return 0;
}