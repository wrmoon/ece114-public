#include <iostream>

void foo(char * str);          // #1
void foo(const char * str);    // #2
void bar(char * str);
void baz(const char * str);


int main()
{
    const char cs[] = "How's it going?";
    char s[] = "What's up doc?";

    foo(s);     // foo(char *)
    foo(cs);    // foo(const char *)
    bar(cs);    // no match
    bar(s);     // bar(char * )
    baz(s);     // baz(const char *)
    baz(cs);    // baz(const char *)
}

