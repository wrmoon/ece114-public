#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> ip_addresses;

    std::ifstream input_file("ip_addresses.txt");
    if (!input_file) {
        std::cerr << "Could not open file ip_addresses.txt" 
                  << std::endl;
        return 1; 
    }
    std::string line;
    while (std::getline(input_file, line)) {
        std::stringstream ss(line);
        std::string token;
        while (std::getline(ss, token, '.')) {
            int octet = std::stoi(token);
            if (octet < 0 || octet > 255) {
                std::cerr << "Invalid IPv4 address: " << line << '\n';
                break;
            }
        }
        if (ss.eof()) {
            ip_addresses.push_back(line);
        }
    }

    for (const auto& ip : ip_addresses) {
        std::cout << ip << '\n';
    }

    return 0;
}
