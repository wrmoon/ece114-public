#include <iostream>
#include <iomanip>
#include <vector>

void vector_info(const std::vector<std::string> &v);

int main()
{
    std::vector<std::string> my_vector; // empty vector object

    std::cout << "Gimme some words (q to quit):" << std::endl;
    std::string word{};
    do {
        std::cin >> word;
        my_vector.push_back(word);
        vector_info(my_vector);
    } while (word != "q");
    my_vector.pop_back(); // remove the last element (q)
    vector_info(my_vector);

    return 0;
}

void vector_info(const std::vector<std::string> &v)
{
    std::cout << "[ ";
    for (unsigned int i=0; i < v.size(); i++) {
        std::cout << v[i];
        if (i < v.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << " ]" << std::endl;
}
