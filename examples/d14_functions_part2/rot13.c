#include <stdio.h>
#include <string.h>
#include <ctype.h>

char rot_by(char plain, int rot);
void str_rot13(char str_plain[]);
void str_unrot13(char str_cipher[]);

int main(int argc, const char * const argv[])
{
    if (argc >= 1) {
        const char* plaintext = argv[argc-1];
        char cipher[strlen(plaintext)+1];
        strncpy(cipher, plaintext, sizeof(cipher)-1);
        str_rot13(cipher);
        printf(" orig: %s\n", plaintext);
        printf("rot13: %s\n", cipher);
        str_unrot13(cipher);
        printf("orig2: %s\n", cipher);
    }
    return 0;
}

char rot_by(char plain, int rot)
{
    char output = '\0';
    if (islower(plain))
    {
        output = (plain - 'a' + rot + 26) % 26 + 'a';
    }
    else if (isupper(plain))
    {
        output = (plain - 'A' + rot + 26) % 26 + 'A';
    }
    else
    {
        output = plain;
    }
    return output;
}

void str_rot13(char str_plain[])
{
    for (int i=0; i<strlen(str_plain); i++)
    {
        str_plain[i] = rot_by(str_plain[i], 13);
    }
}

void str_unrot13(char str_cipher[])
{
    for (int i=0; i<strlen(str_cipher); i++)
    {
        str_cipher[i] = rot_by(str_cipher[i], -13);
    }
}