#include <stdio.h>
int main() {
    for (int y=0; y<25; y++) {
        for (int x=0; x<25; x++) {
            putchar('.');

            if (x == 10 && y == 10){
                goto we_are_done_here;
            }
        }
        putchar('\n');
    }

we_are_done_here:  // this is a label
    printf("X\n");
    return 0;
}