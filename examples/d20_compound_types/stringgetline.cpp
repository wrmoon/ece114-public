#include <iostream>
#include <string>
#include <limits>

// This program demonstrates the use of the function std::getline()
// defined in the string class for use with C++ string types.
// std::getline() is an overloaded function that takes on two forms.
//
//     istream& getline (istream& is, string& str)
//     istream& getline (istream& is, string& str, char delimiter)
//
// These functions provide unformatted character input and take a reference
// to a string object as an argument. The std::getline() functions
// remove the newline or other delimiter character from the input stream.
//
// Do not confuse std::getline() function with std::cin.getline(). std::getline()
// is defined in the string class and is used for reading input into a
// C++ string object. Notice there is no parameter for stating maximum number
// of characters to read. C++ string types dynamically size themselves so
// the string object can grow as needed depending on the number of characters
// in the input stream. std::cin.getline() is defined in the iostream class
// and is used for reding input into a character array.
//
// Notice that these functions return a reference to an istream object
// so their return value can be used as input to any function taking an istream 
// object as input.

int main(void)
{
    std::string name;

    std::cout << "Enter a character string ";
    
    // This form will read until a newline character is read.
    // The newline character will be extracted then discarded.
    // The failbit is not set.

    // Note: there is no limit on the number of characters to
    // read as std::getline function takes a string type as a 
    // parameter. string types dynamically size themselves.

    // The call to cin.ignore() will block with this particular
    // call because the newline is used as the delimiter character.
    // The newline will be read and discarded so the subsequent call
    // to cin.ignore() will block.

    //std::getline(std::cin, name);

    // This form will read until the delimeter character is read.
    // The delimiter character will be extracted then discarded.
    // Any characters after the delimeter character remain in the
    // input stream. The failbit is not set, it will just keep on 
    // reading until the delimiter character is found.

    // Note: there is no limit on the number of characters to
    // read as std::getline function takes a string type as a 
    // parameter. string types dynamically size themselves.

    // The call to cin.ignore() will not block if the delimiter is something
    // other than a newline because a newline will be in the input stream
    // somewhere after the delimiter character.
    //
    std::getline(std::cin, name, ',');

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
