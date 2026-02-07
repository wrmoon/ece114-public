#include <stdio.h>

int main(void)
{
    int i = 20;

    // assign the value of i + 1 to the variable i
    i = i + 1;

    printf("i is %d\n", i);

    // x += y is a shortcut way to say x = x + y
    i += 1;

    printf("now i is %d\n", i);


    return 0;
}
