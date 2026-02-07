#include <stdio.h>
#include <time.h>

int main () {
   time_t seconds = 0;
   printf("size of time_t: %zd\n", sizeof(time_t));

   seconds = time(NULL);
   printf("Hours since January 1, 1970 = %ld\n", seconds/3600);
  
   return(0);
}