#include <set>
#include <string>
#include <iostream>

int main()
{
    std::set<std::string> visited;

    visited.insert("home");
    visited.insert("about");
    visited.insert("home"); // duplicate — silently ignored

    // Because all elements in a set container are unique, count() can only
    // return 1 (if the element is found) or zero (otherwise).
    if (visited.count("home"))
    {
        std::cout << "home was visited" << std::endl;
    }
    return 0;
}