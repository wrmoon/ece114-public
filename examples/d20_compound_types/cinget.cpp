#include <iostream>
#include <limits>

// This program demonstrates the use of the function std::cin.get().
// std::cin.get() is an overloaded function that takes on six forms.
// This program demonstrates the four forms dealing with the standard
// input stream. The forms are:
//
//     istream& get (char* s, streamsize n)
//     istream& get (char* s, streamsize n, char delimiter)
//     int get()
//     istream& get (char& c)
//
// These functions provide unformatted character input and take a pointer
// to a character string as an argument. The std::cin.get() functions leave
// the newline or other delimiter character in the input stream, whereas 
// std::cin.getline() removes it.
//
// Notice that some of these functions return a reference to an istream object
// so their return value can be used as input to any function taking an istream 
// object as input.

int main(void)
{
    char name[25];


    std::cout << "Enter a character string ";
    
    // This form will read up to 19 characters from the input stream
    // or the newline is encountered.
    // The newline character remains in the input stream.
    // The failbit will be set if only the newline is entered.
    std::cin.get(name, 20);

    // This form will read up to 19 characters from the input stream
    // or until an 'x' (the delimiter) is found. Even if a newline
    // is read, it will continue to read until 19 chars or 'x'.
    // The delimiter character remains in the input stream.
    // The failbit will be set if only the delimit character is entered.
    //
    // std::cin.get(name, 20, 'x');

    // This form reads a single character at a time.
    // It will extract the newline character out of the input stream.
    // The failbit will not be set.
    // The call to cin.ignore() will block since the input stream
    // will be empty.
    //
    //while (std::cin.get() != '\n') { ;}

    // This form reads a single character at a time.
    // It will extract the newline character out of the input stream.
    // and assign it to ch. 
    // The failbit will not be set.
    // The call to cin.ignore() will block since the input stream
    // will be empty.
    //
    // do {
    //     std::cin.get(ch);
    // } while (ch != '\n');
    std::cout << "Failbit: " << std::cin.fail() << std::endl;
    
    // cin.ignore() will not block with the first two forms of get() since those
    // forms will leave the delimiter character in the input stream.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "# chars flushed: " << std::cin.gcount() << std::endl;


    return 0;
}
