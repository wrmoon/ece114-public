#include <math.h>
#include <stdio.h>

#define EPSILON 1e-6

int main() {
    double a = 0.1 + 0.2;
    double b = 0.3;

    if (a == b) {
        printf("a == b\n");
    } else {
        printf("a != b\n");
    }

    if (fabs(a - b) < EPSILON) {
        printf("a and b are close enough\n");
    }

    printf("a = %.20f\n", a);
    printf("b = %.20f\n", b);

    return 0;
}


