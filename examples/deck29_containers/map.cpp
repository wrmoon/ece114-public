// std::map example
#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main() 
{
    //std::map<std::string, int> scores;
    std::unordered_map<std::string, int> scores;

    // Insert
    scores["Bob"]   = 78;
    scores["Alice"] = 92;
    scores["Carol"] = 85;

    // Update
    scores["Bob"] = 81;

    // Lookup
    if (scores.count("Alice")) {
        std::cout << "looking up Alice: " << scores["Alice"] << "\n";
    }

    // Iterate — always in sorted key order
    for (const auto& pair : scores) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    // Erase
    scores.erase("Carol");

    return 0;
}