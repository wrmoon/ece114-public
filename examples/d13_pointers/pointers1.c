#include <stdio.h>

int main(void)
{
    int i = 5;

    printf("i is %d\n", i);

    // Introducing the & (address of) operator
    // and the %p (pointer) format specifier
    printf("the address of i is %p\n", &i);

    // Use * to declare a variable as a pointer to an int
    // ptr_to_i is a pointer to an int.
    // We're initializing it to the address of the variable i
    int *ptr_to_i = &i;
    printf("ptr_to_i is %p\n", ptr_to_i);

    // * is also the dereferencing operator.
    // Increment the integer pointed to by ptr_to_i by 5
    *ptr_to_i += 5;

    printf("ptr_to_i is still %p\n", ptr_to_i);
    printf("i is now %d\n", i);
    printf("*ptr_to_i is %d\n", *ptr_to_i);

    return 0;
}
