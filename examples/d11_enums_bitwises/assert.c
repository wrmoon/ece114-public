#include <assert.h>
#include <stdio.h>

int main(void)
{
    float a = 100.0f;

    float b = 40.0f;

    assert(a + b > 150 && "sum is less than 150");
    printf("done\n");
    return 0;
}