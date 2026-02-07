#include <iostream>
#include <limits>

// In this example, the program asks the user to enter a positive integer. If
// the user enters a non-integer or a negative integer, the program will print
// an error message and ask the user to enter a positive integer again. 

// The std::cin.clear() function clears the error flags in case an invalid input
// was entered, and the std::cin.ignore() function discards the input buffer to
// avoid an infinite loop.

int main() {
    int number;

    std::cout << "Enter a positive integer: ";
    while (!(std::cin >> number) || number <= 0) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear(); // clear error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input buffer
    }

    std::cout << "You entered: " << number << std::endl;

    return 0;
}
