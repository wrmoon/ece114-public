//////////////////////////////////////////////////////////////////////////////
//
// Techniques for parsing the command line without using pointers.
// Some of these techniques require global variables. 
//
// NOTE 1: It is important to understand the techniques used here.
//         You will probably need to adapt them to fit your program.
//
// NOTE 2: See better_validation.c for better validation examples that use
//         pointers instead of globals.
//
// last updated 2/10/2026
//
//////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

// prototypes
void clearInputBuffer();
void getInputFromUser();
int getValidNumber(int min_value, int max_value);

// Global input array.  In real life, you'll want to make the array size larger, like 1000. 
// It's small here to demonstrate and test what happens when user enters more characters.
char string_input[20] = {0};

int main(void)
{
    // example #1: Getting a number from the user
    const int min = 10;
    const int max = 21;
    printf("Enter a number between %d and %d: ", min, max);
    int user_number = getValidNumber(min, max);
    printf("You entered %d\n", user_number);


    // example #2: Getting a string (with spaces) from a user, and validating the output
    const char DESIRED_STRING[] = "Derecho";
    printf("Enter a string: ");
    for(;;)
    {
        getInputFromUser();
        printf("<%s>\n", string_input);

        // notice that when strings match, strcmp returns zero
        if (strcmp(string_input, DESIRED_STRING) == 0)
        {
            break;
        }
        printf("Hello! Enter the right string (%s) this time: ", DESIRED_STRING);
    }

    // example #3: A more complex example
    do
    {
        printf("Enter a word, a number and another word: ");
        getInputFromUser();
        char word1[80] = {0};
        char word2[80] = {0};
        int number = 0;
        // Using fgets() with sscanf() is easier, safer and more flexible than
        // scanf() directly
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

// Safely clear the input buffer. Can be called even if the input buffer is empty
void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


// Get string input from the stdin, spaces and all. Puts user input into
// string_input.  Strips newline character from user-supplied input.  Clears out
// input buffer if user tried to overflow string_input.  When function returns,
// string_input contains what the user typed in, up to sizeof(string_input) - 1
// characters.
void getInputFromUser()
{
    fgets(string_input, sizeof(string_input), stdin);
    size_t orig_length = strlen(string_input);
    // Strip newline from str, if it's there. If it's not there, then we wind up
    // (safely) writing the null terminator on top of the null terminator.
    string_input[strcspn(string_input, "\n")] = '\0';

    if (orig_length == strlen(string_input))
    {
        // If we didn't find a \n in the input string, then the user typed more
        // characters into stdin that could fit in string_input.
        printf("Ignoring extra characters\n");
        clearInputBuffer();
    }
}

// Gets number from stdin, reprompting the user if the value < min_value or > max_value
// returns number
int getValidNumber(int min_value, int max_value)
{
    int int_input = 0;
    for (;;)
    {
        // for simple numerical input, scanf("%d") works great.
        if (scanf("%d", &int_input) == 1)
        {
            // user entered a number
            if (int_input >= min_value && int_input <= max_value)
            {
                // user entered a valid number
                // get rid of \n left behind in input buffer
                clearInputBuffer();
                break; // out of for(;;) loop
            }
        }
        printf("Please enter a valid number between %d and %d: ", min_value, max_value);
        clearInputBuffer(); // needed because user didn't enter a number, and it's left in buffer
    }

    return int_input;
}
