#include <stdio.h>

int main() {
    double a = 0.1 + 0.2;
    double b = 0.3;

    if (a == b) {
        printf("a == b\n");
    } else {
        printf("a != b\n");
    }

    printf("a = %.20f\n", a);
    printf("b = %.20f\n", b);

    return 0;
}
