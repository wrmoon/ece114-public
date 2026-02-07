#ifdef __cplusplus
#error You have selected the g++ compiler. Choose gcc instead.
#endif
#include <stdio.h>

int main()
{
    const char *const line = "==============================================================";
    printf("%s\n", line);
    printf("Welcome to ECE114! If you are reading this from your terminal,\n");
    printf("then you have installed clang correctly.\n");
    printf("%s\n", line);

    return 0;
}
