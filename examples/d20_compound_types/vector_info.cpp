// vector demo from http://www.cplusplus.com/reference/vector/vector/push_back
#include <iostream>
#include <iomanip>
#include <vector>

void vector_info(const std::vector<int> &v);

int main()
{
    std::vector<int> my_vector; // empty vector object
    int my_int;
    vector_info(my_vector);

    std::cout << "Enter some integers (0 to quit):" << std::endl;
    do {
        std::cin >> my_int;
        my_vector.push_back(my_int);
        vector_info(my_vector);
    } while (my_int);
    my_vector.pop_back(); // remove the last element (0)
    vector_info(my_vector);

    return 0;
}

void vector_info(const std::vector<int> &v)
{
    std::cout << "size=" << v.size() << "  "
              << "capacity=" << v.capacity() << "  "
              << "empty=" << std::boolalpha << v.empty() << "  "
              << "max_size=" << std::scientific
              << std::setprecision(3) << double(v.max_size()) << "  "
              << std::endl;
    std::cout << "[ ";
    for (unsigned int i=0; i < v.size(); i++) {
        std::cout << v[i];
        if (i < v.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << " ]" << std::endl;
}
