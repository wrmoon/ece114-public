#include <stdio.h>

void get_nephew_ages(int*, int*, int*);

int main(void)
{
    int huey_age, dewey_age, louie_age;
    get_nephew_ages(&huey_age, &dewey_age, &louie_age);
    printf(
        "Nephew ages: H=%d, D=%d, L=%d\n", 
        huey_age, dewey_age, louie_age
    );
}

void get_nephew_ages(int *h, int *d, int *l)
{
    *h = 10;
    *d = 11;
    *l = 12;
}

