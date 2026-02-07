// file_io2.cpp: read by words
// adapted from http://www.cplusplus.com/doc/tutorial/files/
#include <iostream>
#include <fstream>
#include <string>

void read_by_words(const std::string & filename)
{
    std::ifstream myfile(filename);
    if (myfile.is_open())
    {
        std::string word;
        while (myfile >> word)
        {
            std::cout << word << '\n';
        }
        myfile.close();
    }
    else
    {
        std::cout << "unable to open file\n";
    }
}

int main()
{
    std::string filename = "example.txt";
    read_by_words(filename);
    return 0;
}

