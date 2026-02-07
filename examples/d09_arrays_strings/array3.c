#include <stdio.h>

int prompt_for_int();

int main()
{
    printf("enter number of elements: ");
    int num_elements = prompt_for_int();

    int a[num_elements]; // variable length array
    printf("%zu\n", sizeof(a)); // 18446744073709551612 for -1
    for (int i=0; i < num_elements; i++)
    {
        printf("%d", i);
        a[i] = 0;
    }
    for (int i=0; i < num_elements; i++)
    {
        printf("enter number %d: ", i);
        int num = prompt_for_int();
        if (num == -1)
        {
            break;
        }
        a[i] = num;
    }


    // compute average
    float sum = 0.0;
    for (int i=0; i < num_elements; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
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
