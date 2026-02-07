#include <iostream>
#include <limits>

// This program demonstrates the use of the function std::cin.getline().
// std::cin.getline() is an overloaded function that takes on two forms.
//
//     istream& getline (char* s, streamsize n)
//     istream& getline (char* s, streamsize n, char delimiter)
//
// These functions provide unformatted character input and take a pointer
// to a character string as an argument. The std::cin.getline() functions
// remove the newline or other delimiter character from the input stream, 
// whereas std::cin.get() does not.
//
// Notice that these functions return a reference to an istream object
// so their return value can be used as input to any function taking an istream 
// object as input.

int main(void)
{
    char name[25];
    char ch;


    std::cout << "Enter a character string ";
    
    // This form will read up to 19 characters from the input stream
    // or until the newline is encountered. The newline will be 
    // extracted then discarded.
    // The failbit will be set once 19 characters have been read and the 
    // delimiter is not found.
    // The call to cin.ignore() will block if the newline is encountered
    // (read and discarded).
    //
    //std::cin.getline(name, 20);

    // This form will read up to 19 characters from the input stream
    // or until an 'x' (the delimiter) is found. The delimiter character
    // will be extracted then discarded
    // The failbit will be set once 19 characters have been read and the 
    // delimiter is not found.
    // The call to cin.ignore() will not block if the delimiter is something
    // other than a newline because a newline will be in the input stream
    // somewhere after the delimiter character.
    //
    std::cin.getline(name, 20, 'x');

    // display the value of the failbit.
    std::cout << "Failbit: " << std::cin.fail() << std::endl;

    // if the failbit was set, use cin.clear() to clear it
    if (std::cin.fail())
        std::cin.clear();
    
    // use cin.ignore() to clear the rest of the input stream
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "# chars flushed: " << std::cin.gcount() << std::endl;


    return 0;
}
