#include <stdio.h>
int main(void)
{
    #if 0
    const int a = 10;
    int b = 20;

    const int *ptr1 = &a;
    int * const ptr2 = &b;
    const int * const ptr3 = &a;

    ptr1 = &b;
    int c = *ptr2;

    *ptr2 = 15;
    // *ptr1 = 15;
    // ptr2 = &a;
    int d = *ptr3;
    //ptr3 = &a;
    //*ptr3 = 17;
    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
    printf("*ptr1=%d *ptr2=%d *ptr3=%d\n", *ptr1, *ptr2, *ptr3);
    #else
    const char a[] = "Can't touch this";
    char b[] = "Hello";

    const char *ptr1 = a;
    char * const ptr2 = b;
    const char * const ptr3 = "Stop";

    ptr1 = b;
    //*ptr1 = 'J';
    //ptr1[3] = 'x';
    *ptr2 = 'J';
    ptr2[2] = 't';
    char c = *ptr3;
    char * const ptr4 = ptr3;
    *ptr4 = 3;
    //ptr3 = "New";
    //*ptr3 = '!';


    printf("a=\"%s\" b=\"%s\" c='%c'\n", a,b,c);
    printf("ptr1=\"%s\" ptr2=\"%s\" ptr3=\"%s\"\n", ptr1,ptr2, ptr3);

    #endif


    return 0;
}
