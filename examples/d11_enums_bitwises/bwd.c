#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char* toBinary(unsigned short n, char binary[]);
unsigned short process(unsigned short, unsigned short, const char*);
void printResult(unsigned short, unsigned short, unsigned short, char []);

void usage(void)
{
    printf("usage: bwd \"<number> [ & | ^ << >> ] <number>\" or \n");
    printf("       bwd \"~ <number>\"\n");
    exit(1);
}

int main(int argc, char* argv[])
{
    unsigned short n1, n2, result;
    n1 = n2 = result = 0;
    char *operation = NULL;
 
    if (argc != 2)
    {
        printf("wrong number of arguments\n");
        usage();
    }
    char iargv[3][20] = {{'\0'}, {'\0'}, {'\0'} };
    int iargc = sscanf(argv[1], "%s %s %s", iargv[0], iargv[1], iargv[2]);
    if (iargc == 2 && strcmp(iargv[0], "~") == 0)
    {
        operation = iargv[0];
        n1 = (unsigned short)atoi(iargv[1]);
        n2 = 0;
    } else if (iargc == 3)
    {
        n1 = (unsigned short)atoi(iargv[0]);
        operation = iargv[1];
        n2 = (unsigned short)atoi(iargv[2]);
    } else {
        printf("Can't parse this: iargc=%d %s %s %s\n", iargc, iargv[0], iargv[1], iargv[2]);
        usage();
    }
    result = process(n1, n2, operation);
    printResult(n1, n2, result, operation);
 
    return 0;
}

void printResult(unsigned short n1, unsigned short n2, unsigned short result, char operation[])
{
    char buffer[30];
    if (operation[0] == '~')
    {
        printf("%2s %s 0x%04x %3d\n", operation, toBinary(n1, buffer), n1, n1);
    }
    else 
    {
        printf("   %s 0x%04x %3d\n", toBinary(n1, buffer), n1, n1);
        printf("%2s %s 0x%04x %3d\n", operation, toBinary(n2, buffer), n2, n2);
    }
    printf("   -------- ------ ---\n");
    printf(" = %s 0x%04x %3d\n", toBinary(result, buffer), result, result);
}

unsigned short process(unsigned short n1, unsigned short n2, const char* operation)
{
    unsigned short result = 0;
    switch (operation[0])
    {
        case '&':
            result = n1 & n2;
            break;
        case '|':
            result = n1 | n2;
            break;
        case '^':
            result = n1 ^ n2;
            break;
        case '>':
            result = n1 >> n2;
            break;
        case '<':
            result = n1 << n2;
            break;
        case '~':
            result = ~n1;
            break;
        default:
            printf("bad operation (%s)\n", operation);
            usage();
            break;
    }
    return result;
}

char* toBinary(unsigned short n, char binary[])
{
    int k = 0;
    for (unsigned i = (1 << 7); i > 0; i = i / 2) {
        binary[k++] = (n & i) ? '1' : '0';
    }
    binary[k] = '\0';
    return binary;
}
 