#include <stdio.h>
#include <stdlib.h> // need this for malloc()

void get_temperature_data(double *, int);
void print_temperature_data(const double *, int);

int main(void)
{
    int num_people = 0;
    printf("How many people? ");
    scanf("%d", &num_people);
    double *temperatures = 
        (double*)malloc(num_people * sizeof(double));
    // always check for NULL when calling malloc()
    if (temperatures != NULL)
    {
        get_temperature_data(temperatures, num_people);
        print_temperature_data(temperatures, num_people);
        free(temperatures);
        // always NULL out your pointer after calling free()
        temperatures = NULL;
    }
}
void get_temperature_data(double *temperatures, int people)
{
    // 
}
void print_temperature_data(const double *temperatures, int people)
{
    // 
}

