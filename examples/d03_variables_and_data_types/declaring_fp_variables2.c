#include <stdio.h>

int main(void)
{
    // using const 
    const float distance_to_the_moon_in_cm = 3.844e10f;
    const double PI = 3.14159265358979323846;

    double radius = 1.01;
    printf("area = %lf\n", radius * radius * PI);
    printf("dtm %lf\n", distance_to_the_moon_in_cm );

    // PI = PI + 1.0; // error - you can't modify PI.
    return 0;
}
