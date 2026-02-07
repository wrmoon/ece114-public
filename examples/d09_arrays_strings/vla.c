#include <stdio.h>

int prompt_for_int();

int main()
{
    printf("enter number of elements: ");
    int num_elements = prompt_for_int();

    int a[num_elements]; // variable length array
    for (int i=0; i < num_elements; i++)
    {
        printf("enter number %d: ", i);
        a[i] = prompt_for_int();
    }


    // compute average
    float sum = 0.0;
    for (int i=0; i < num_elements; i++)
    {
        sum += a[i];
    }
    printf("The average of the numbers is %.2f\n", sum / num_elements);
    return 0;
}

int prompt_for_int()
{
    int number;
    if (scanf("%d", &number) == 1)
    {
        return number;
    }
    return -1;
}
