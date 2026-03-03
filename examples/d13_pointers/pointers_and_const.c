#include <stdio.h>

void pline(void)
{
    printf("------------------\n");
}

// If you have a const variable, you can't make a non-const pointer to it
void example1(void)
{
    const int e1 = 10;
    printf("e1 is %d\n", e1);

    // The compiler does its best to honor the const'ness of its
    // variables, and doesn't allow a backdoor. (with -Werror turned on)

    // error: initializing 'int *' with an expression of type 'const int *'
    // discards qualifiers

#if 0 // does not compile
    int *ptr = &ca;
    printf("*ptr is %d\n", *ptr);

    *ptr = 3;

    printf("ca is now %d\n", ca);
    printf("*ptr is now %d\n", *ptr);
#endif

}

// How to declare a pointer to a const
// In other words, a pointer to something we can't modify
void example2(void)
{
    const int e2 = 10;
    printf("e2 is %d\n", e2);

    // like this...
    const int *p_e2 = &e2; 
    // ...or like this
    int const *p2_e2 = &e2;

    printf("*p_e2 is %d\n", *p_e2);
    printf("*p2_e2 is %d\n", *p2_e2);

    // We can't do this, because ptr points to a const.
    // *p_e2 = 3; // error: read-only variable is not assignable
    // *p2_e2 = 3; // error: read-only variable is not assignable


    // but we _can_ change what the pointer points to
    const int n = 222;
    p_e2 = &n;
    printf("*p_e2 is now %d\n", *p_e2);
}


// How to declare a const pointer
// In other words, a pointer that must always point to the same thing
void example3(void)
{
    int e3 = 10;
    printf("e3 is %d.\n", e3);

    // notice the const is to the right of the * 
    int* const p_e3 = &e3;
    printf("*p_e3 is %d\n", *p_e3);

    *p_e3 = 3;
    printf("*p_e3 is %d\n", *p_e3);

    // can't change the value of the pointer
    // error: cannot assign to variable 'p_e3' with const-qualified type 'int *const'
    int f3 = 333;
    //p_e3 = &f3;
    printf("f3 is %d.\n", f3);
}

// How to declare a const pointer to a const
// ...such a pointer cannot be modified, and you can't modify what it points
//    to, either
void example4(void)
{
    int e4 = 10;
    printf("e4 is %d.\n", e4);

    // notice the const is to the right of the * 
    const int* const p_e4 = &e4;
    printf("*p_e4 is %d\n", *p_e4);

    // can't do this
    //*p_e4 = 4;

    // can't change the value of the pointer
    // error: cannot assign to variable 'p_e4' with const-qualified type 'int *const'
    int f4 = 444;
    //p_e4 = &f4;
    printf("f4 is %d.\n", f4);
}

// a string literal is a const pointer to const char
void example5(void)
{
    // This is allowed (probably for backward compatiblity)
    // ... but it's very dangerous.
    char *danger = "mousey";

    // care for a seg fault, perhaps? 
    //*danger = 'l';
    printf("%s\n", danger);

    const char *safe = "house";
    // compiler will catch this one.
    // *safe = 'm'; // read-only variable is not assignable

    // This is OK, though, because the pointer is not const
    safe = "slide into home plate";
    printf("%s\n", safe);

    // Use a const char* const 
    const char *const golden_rule = "Do onto others as you would have them do onto you.\n";
    // golden_rule will always point to the same string literal.

    // As a matter of fact, now you can do something like this:
    printf(golden_rule);

    // Or even this:
    const char *const my_format = "The %s of %s is %d\n";
    printf(my_format, "Duke", "Earl", 18);
    printf(my_format, "Book", "Kells", 1800);
}

int main(void)
{
    example1();
    pline();

    example2();
    pline();

    example3();
    pline();

    example4();
    pline();

    example5();
    return 0;
}