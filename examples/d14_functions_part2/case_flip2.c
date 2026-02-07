#include <stdio.h>
#include <string.h>
#include <ctype.h>

char case_flip(char);
void flip_string(char *);

int main(void) {
    char text[200];
    printf("address of text: %p\n", text);
    printf("Enter text to flip case: ");
    fgets(text, sizeof(text), stdin);
    flip_string(text);
    printf("%s\n", text);
    return 0;
}

char case_flip(char input) {
    char output = input;
    if (islower(input)) {
        output = toupper(input);
    } else if (isupper(input)) {
        output = tolower(input);
    }
    return output;
}

void flip_string(char *str_input) {
    printf("address of str_input: %p\n", str_input);
    for (int i=0; i<strlen(str_input); i++) {
        str_input[i] = case_flip(str_input[i]);
    }
}

