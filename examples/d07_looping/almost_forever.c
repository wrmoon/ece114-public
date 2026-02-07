#include <stdio.h>

int main(void)
{
    int a = 1;
    while(--a < 6)
    {
        //printf("here we go %d (%#08x)\n", a, a);
    }
    printf("...and we're done with %d (%#08x)\n", a, a);

    return 0;
}