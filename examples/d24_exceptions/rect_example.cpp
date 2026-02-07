// rectangle exercise - main
// from C++ How to Program p 656
#include <iostream>
#include "rectangle.h"

int main()
{
    Rectangle a;
    Rectangle b(5.0, 18.0);
    a.dump();
    b.dump();

    try
    {
        Rectangle c(67.0, 888.0);
    }
    catch (std::invalid_argument & e)
    {
        std::cout << "\nEXCEPTION: "
                  << e.what() << std::endl;
    }

    // set b's length to a value that will cause the
    // perimeter() to throw an exception
    b.setLength(10);

    // Call perimeter() in a try block to catch the exception.
    // Here we are demonstrating the (...) type which is a catch-all.
    // Because we don't have a catch() that is looking for an
    // out_of_range exception, which is what perimeter() will throw,
    // the exception will be caught by the default condition.
    try
    {
        b.perimeter();
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "\nEXCEPTION: "
                  << e.what() << std::endl;
    }
    catch (std::out_of_range &e)
    {
        std::cout << "\nOUT OF RANGE EXCEPTION: "
                  << e.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "\nDEFAULT EXCEPTION" << std::endl;
    }
    return 0;
}