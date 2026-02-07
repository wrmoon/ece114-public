#include <stdio.h>

// when using #defines, always wrap your expression in parens
#define PI (3.14159265358979323846)

int main(void)
{
    // add units to your variables
    float frequency_in_hertz;
    double duration_in_microseconds;
    float distance_to_the_moon_in_cm = 3.844e10f;
    double radius_multiplier = 2 * PI;

    printf("8pi= %lf\n", radius_multiplier * 4);
    printf("dtm= %lf cm\n", distance_to_the_moon_in_cm );
    return 0;
}
