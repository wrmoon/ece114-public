// file_io1.cpp: basic file operations
// adapted from http://www.cplusplus.com/doc/tutorial/files/
#include <iostream>
#include <fstream>
#include <string>

void write_example(const std::string &filename)
{
    std::ofstream myfile(filename);
    if (myfile.is_open())
    {
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile.close();
    }
    else
    {
        std::cout << "unable to open file\n";
    }
}

void read_example(const std::string & filename)
{
    std::string line;
    std::ifstream myfile(filename);
    if (myfile.is_open())
    {
        while (std::getline(myfile, line))
        {
            std::cout << line << '\n';
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
    write_example(filename);
    read_example(filename);
    return 0;
}

