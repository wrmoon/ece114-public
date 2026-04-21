// deque (pronounced "deck" examples)
#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<std::string> queue;

    // Add to both ends
    queue.push_back("middle");
    queue.push_front("first");
    queue.push_back("last");
    // [ first, middle, last ]

    // Random access is possible, too -  like a vector
    std::cout << queue[1] << "\n";  // middle

    // Remove from both ends
    queue.pop_front();  // removes "first"
    queue.pop_back();   // removes "last"

    std::cout << queue.front() << "\n";  // middle

    return 0;
}