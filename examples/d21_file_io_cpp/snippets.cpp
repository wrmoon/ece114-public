
#include <iostream>
#include <fstream>

int main()
{
    // These examples all do the same thing
    // NOTE: previous data in the file is always overwritten in these examples
    std::ofstream myfile1("filename");

    std::ofstream myfile2;
    myfile2.open("filename");

    std::ofstream myfile3("filename", std::ios_base::out);

///////////

    // Append data to end of file
    std::ofstream myfile3("filename", std::ios_base::out | std::ios_base::app);

///////////

}