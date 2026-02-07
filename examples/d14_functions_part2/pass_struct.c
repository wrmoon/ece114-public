#include <stdio.h>

typedef struct 
{
    double data[1000];
    long long mohr_data[1000];
} BigGulp;

int processData1(BigGulp);
int processData2(BigGulp *);

int main(void)
{
    BigGulp gb = { {4.4}, {10} };
    int p1 = processData1(gb);
    int p2 = processData2(&gb);
    printf("p1=%d p2=%d\n", p1, p2);
    return 0;
}

int processData1(BigGulp gulp)
{
    printf("sizeof(gulp) = %ld\n", sizeof(gulp));
    return (int)(gulp.data[0] * gulp.mohr_data[0]);
}

int processData2(BigGulp *gulp)
{
    printf("sizeof(gulp) = %ld\n", sizeof(gulp));
    return (int)(gulp->data[0] * gulp->mohr_data[0]);
}

