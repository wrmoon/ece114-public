// Techniques for parsing the command line
// last updated 2/12/2023
#include <stdio.h>
#include <string.h>

#define DESIRED_STRING "hello"
// const char* DESIRED_STRING = "hello";

// a little function that clears the input buffer :-)
void clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


char string_input[20] = {0};

// Get string input from the user. Puts user input into string_input.
// Strips newline character from user-supplied input.
// Clears out input buffer if user tried to overflow string_input.
void get_input_from_user()
{
    fgets(string_input, sizeof(string_input), stdin);
    size_t orig_length = strlen(string_input);
    // strip newline from str, if it's there
    string_input[strcspn(string_input, "\n")] = '\0';

    if (orig_length == strlen(string_input))
    {
        // If we didn't find a \n in the input string, then the user typed more
        // characters into stdin that could fit in string_input.
        printf("Ignoring extra characters\n");
        clear_input_buffer();
    }
}

int main(void)
{
    /*
    int int_input;
    const int MIN_GOOD = 20;
    const int MAX_GOOD = 55;

    // numerical input
    printf("Enter some number: ");
    for(;;)
    {
        // for simple numerical input, scanf("%d") works great.
        if (scanf("%d", &int_input) == 1)
        {
            if (int_input >= MIN_GOOD && int_input <= MAX_GOOD)
            {
                // get rid of \n in input buffer
                clear_input_buffer();
                break;
            }
        }
        printf("Please enter a valid number between %d and %d: ", MIN_GOOD, MAX_GOOD);
        clear_input_buffer(); // needed because user didn't enter a number, and it's left in buffer
    }
    */

    printf("Enter a string: ");
    for(;;)
    {
        get_input_from_user();
        printf("<%s>\n", string_input);

        // notice that when strings match, strcmp returns zero
        if (strcmp(string_input, DESIRED_STRING) == 0)
        {
            break;
        }
        printf("Hello! Enter the right string (%s) this time: ", DESIRED_STRING);
    }

    do
    {
        printf("Enter a word, a number and another word: ");
        get_input_from_user();
        char word1[80] = {0};
        char word2[80] = {0};
        int number;
        // using fgets with sscanf is easier, safer and more flexible than scanf 
        if (sscanf(string_input, "%s %d %s", word1, &number, word2) == 3)
        {
            printf("The %s of %s is %d\n", word1, word2, number);
            break;
        }
        printf("You didn't follow directions!\n");
    } while (1);
    
    printf("We are done here\n");
    return 0;

}
