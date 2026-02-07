// trouble.c -- misuse of =
// will cause infinite loop
#include <stdio.h>
int main(void)
{
    long num = 0L;
    long sum = 0L;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    int status = scanf("%ld", &num);
    while (status = 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}

// Prata, Stephen. C Primer Plus (Developer's Library) (pp. 201-202). Pearson Education. Kindle Edition. 