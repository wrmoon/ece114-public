#include <stdio.h>

enum Color { 
    red, orange, yellow, green,
    blue, indigo, violet
};

typedef enum {
    ok = 200,
    no_content = 204,
    moved_permanently = 301,
    found = 302,
    bad_request = 400,
    unauthorized = 401,
    forbidden = 403,
    not_found = 404,
    i_am_a_teapot = 418,
    server_error = 500
} HttpResponseCode;

enum Foo { A, B, C=10, D, E=1, F, G=F+C };
// A=0, B=1, C=10, D=11, E=1, F=2, G=12

int main(void)
{
    enum Color car_color = blue;

    if (car_color == red) {
        float insurance_incr = 1.05;
    }

    HttpResponseCode status = not_found;

    if (status != ok)
    {
        printf("not OK: %d\n", status);
    } 

    return 0;
}


