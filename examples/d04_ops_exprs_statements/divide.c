// division examples
#include <stdio.h>

int main(void) {
    int ia = 5;
    int ib = 2;

    float fa = 5.0f;
    float fb = 2.0f;

    // Integer division
    int int_div = ia / ib;

    // Floating-point division
    double float_div = fa / fb;

    // Output the results
    printf("Integer division (%d / %d): %d\n", ia, ib, int_div);
    printf("Floating-point division %f / %f): %.2f\n", fa, fb, float_div);

    return 0;
}
