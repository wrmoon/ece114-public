#include <stdio.h>
int main(void)
{
// do something 10 times:  0-9 (classic)
for (int i = 0; i < 10; i++);

// do something 10 times: 1-10
for (int i=1; i <= 10; i++);

// do something 10 times, ++i or i++ makes no difference
for (int i=0; i < 10; ++i);

// counting down
for (int countdown=5; countdown >= 0; --countdown);

// count by 10s
for (int i=0; i < 100; i += 10);

// iterate over letters
for (char letter='a'; letter <= 'z'; letter++);

// iterate with floats
for (float debt=100.0; debt <= 150.0; debt += 0.1);

// notice declaring k outside of for loop
int k = 0;
for (; k < 100; k++);

// comma operator in a for loop
for (int i=0, j=500; i < 100; i++, j-= 5);

// infinite/indefinite loop
for (;;);

}
