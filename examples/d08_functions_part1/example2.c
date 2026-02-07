#include <stdio.h>

void print_usage(void);
double average(double, double);

int my_function();

int main(void)
{
    double grade1 = 88.8;
    double grade2 = 77.7;
    double grade_average = average(grade1, grade2);

    print_usage();
    printf("The average is: %lf", grade_average);
    return 0;
}

// return the average of two numbers passed in
double average(double a, double b)
{
    double sum = a + b;
    return sum / 2;
}

// print the usage (how to use the program)
void print_usage(void)
{
    printf(
        "Here is how to use this program:\n"
        " 1) Read The Fine Manual.\n"
        " 2) ?\n"
        " 3) Profit!\n"
    );
}

int my_function(int a)
{
    a = 2 ;
    printf("do some stuff\n");
    return a;
}