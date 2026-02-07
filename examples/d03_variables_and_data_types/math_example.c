#include <math.h>
#include <stdio.h>

// This program calculates the area of a circle from given radius
int main(void)
{
    double radius = 0.0;
    printf("Enter the radius: ");
    scanf("%lf", &radius);

    double circle_area = M_PI * pow(radius, 2.0);
    printf("The area of that circle is %.3lf\n", circle_area);

    return 0;
}

