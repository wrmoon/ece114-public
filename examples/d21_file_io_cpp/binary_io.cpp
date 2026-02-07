// binary_io.cpp
// adapted from https://www.eecs.umich.edu/courses/eecs380/HANDOUTS/cppBinaryFileIO-2.html
#include <fstream>
#include <iostream>

struct Person
{
    char name[50];
    int age;
    char phone[24];
};

void write_binary(const std::string &filename)
{
    Person me {"Billy Pilgrim", 35, "585-555-1212"};
    Person phone_book[30];
    int x {123};
    double fx {34.54};
    std::ofstream outfile(filename, std::ios::binary | std::ios::out);
    if (outfile.is_open())
    {
        // BEWARE: casting one pointer type to another is very dangerous
        outfile.write((const char *)&x, sizeof(int)); // sizeof can take a type
        outfile.write((const char *)&fx, sizeof(fx)); // or it can take a variable name
        outfile.write((const char *)&me, sizeof(me)); // write an entire struct
        outfile.write((const char *)phone_book, 30 * sizeof(Person)); // array of structs
        outfile.close();
    }
    std::cout << me.name << " " << me.age << " " << me.phone << " "
              << x << " " << fx << std::endl;
}

void read_binary(const std::string &filename)
{
    Person me{};
    Person phone_book[30];
    int x{};
    double fx{};

    std::ifstream infile(filename, std::ios::binary | std::ios::in);
    if (infile.is_open())
    {
        // BEWARE: casting one pointer type to another is very dangerous
        infile.read((char *)&x, sizeof(int)); // sizeof can take a type
        infile.read((char *)&fx, sizeof(fx)); // or it can take a variable name
        infile.read((char *)&me, sizeof(me)); // write an entire struct
        infile.read((char *)phone_book, 30 * sizeof(Person)); // array of structs
        infile.close();
    }
    std::cout << me.name << " " << me.age << " " << me.phone << " "
              << x << " " << fx << std::endl;
}

int main ()
{
    std::string filename = "example.dat";
    write_binary(filename);
    read_binary(filename);
    return 0;
}

