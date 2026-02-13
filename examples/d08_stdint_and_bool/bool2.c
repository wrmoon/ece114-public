#include <stdbool.h>
#include <stdio.h>


int main(void)
{
    bool a = true;
    bool b = false;

    printf("a is %d and its size is %zu\n", a, sizeof(a));
    printf("b is %d and its size is %zu\n", b, sizeof(b));
    printf("a is %s\n", a ? "true" : "false");
    return 0;
}