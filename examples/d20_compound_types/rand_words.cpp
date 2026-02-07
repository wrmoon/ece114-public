// sample program used to demonstrate
// 1) use of random library
// 2) use of flush
#include <iostream>
#include <random>
#include <string>

std::string generate_random_word() {
    static const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    static const size_t alphabet_size = sizeof(alphabet) - 1;

    static std::random_device rd;
    static std::mt19937 rng(rd());
    static std::uniform_int_distribution<size_t> dist(0, alphabet_size - 1);

    std::string word;
    for (int i = 0; i < 5; ++i) {
        word += alphabet[dist(rng)];
    }
    return word;
}

int main() {
    static const int NUM_LINES = 20;

    for (int i = 0; i < NUM_LINES; ++i) {
        std::string word;
        for (int j = 0; j < 10; ++j) {
            std::cout << generate_random_word() << std::flush;
            if (j < 9) {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
