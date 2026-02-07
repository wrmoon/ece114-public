#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // on some platforms, long and long long might be different
    int a = 10;
    unsigned long b = 0xFFFF00003333AAAAL;
    unsigned long long f = 0xFFFF00003333AAAALL;

    // with stdint.h, these types have a fixed known number of bits

    // unsigned 32 bit integer
    uint32_t c = 20;

    // unsigned 64 bit integer
    uint64_t d = 0xFFFF00003333AAAAL;

    // signed 16 bit integer
    int16_t e = -32760;


    printf("a is %d, sizeof(a)=%zu\n", a, sizeof(a));
    printf("b is %lx, sizeof(b)=%zu\n", b, sizeof(b));
    printf("c is %u, sizeof(c)=%zu\n", c, sizeof(c));
    printf("d is %lu, sizeof(d)=%zu\n", d, sizeof(d));
    printf("e is %d, sizeof(e)=%zu\n", e, sizeof(e));
    printf("f is %llx, sizeof(f)=%zu\n", f, sizeof(f));

    return 0;
}