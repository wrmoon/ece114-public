/* Listing 9.4 proto.c -- uses a function prototype */
#include <stdio.h>
//int imax(); // old-style declaration
int imax(int, int); // prototype

int main(void)
{
    //printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
    return 0;
}

int imax(int n, int m)
{
    return (n > m ? n : m);
}

// Adapted from C Primer Plus (Developer's Library) (p. 350).
// Pearson Education. Kindle Edition. 