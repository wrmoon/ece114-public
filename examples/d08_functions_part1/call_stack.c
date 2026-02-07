#include <stdio.h>

int square(int);
int cube(int);
int fourth_power(int);

int main(void) {
    for (int i=2; i <= 15; i++) {
        int fp = fourth_power(i);
        printf("The fourth power of %d is %d\n", i, fp);
    }
    return 0;
}

int square(int num) {
    int square_of = num * num;
    return square_of;
}

int cube(int num) {
    int cube_of = square(num) * num;
    return cube_of;
}

int fourth_power(int num) {
    int fourth_power_of = cube(num) * num;
    num = -1; // the variable i is not affected
    return fourth_power_of;
}


