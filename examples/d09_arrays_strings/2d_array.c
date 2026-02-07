#include <stdio.h>

// error: variable-sized object may not be initialized
// const int NUM_DAYS = 7;
#define NUM_DAYS 7
const int NUM_WEEKS = 4;

int main(void)
{
    float weeklyRainfall [][NUM_DAYS] = {
        {1.2, .3, .4,  0, 2, 2.1, .1},
        {.1,   0,  0,  0, 2,  .5, .2},
        {.3,  .4, .5, .2, 0,   0, .1},
        {0,   .4, .2, .8, 1, 1.1, .3}
    };
    
    for (int i=0; i < NUM_WEEKS; i++)
    {
        printf("Week %d:\n", i+1);
        for (int j=0; j < NUM_DAYS; j++)
        {
            printf(
                " %5.1f",
                weeklyRainfall[i][j]
            );
        }
        printf("\n");
    }

    return 0;
} 
